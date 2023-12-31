#include "../../include/NeuralNetwork/neuralNetwork.h"
#include <vector>

NeuralNetwork::NeuralNetwork(){
}


NeuralNetwork::~NeuralNetwork(){
}


NeuralNetwork::NeuralNetwork(int nbOfLayers, ...):nbOfLayers(nbOfLayers){
    va_list nodes;
    va_start(nodes, nbOfLayers);
    int inNb = va_arg(nodes, int);
    int outNb;
    for(int i = 0; i<nbOfLayers-1; i++){
        outNb = va_arg(nodes, int);
        layers.push_back(Layer(inNb,outNb));
        inNb = outNb;
    }
    va_end(nodes);
}


std::vector<double> NeuralNetwork::calculateOutputs(std::vector<double> inputs){
    std::vector<double> outputs;
    outputs = inputs;
    for(int i=0; i<nbOfLayers-1; i++){
        outputs = layers[i].calculateLayerOutput(outputs);
    }
    return outputs;
}


int NeuralNetwork::classifyOutput(std::vector<double> inputs){
    int index = 0;
    std::vector<double> output = calculateOutputs(inputs);
    double max = output[0];
    for(int i=1 ; i<output.size(); i++){
        if(max < output[i]){
            max = output[i];
            index = i;
        }
    }
    return index;
}


void NeuralNetwork::learnNetwork(std::vector<Point> data, double learnValue){
    //Spliting data into smaller batches for faster learning
    int batchSize = data.size()/20;
    for(int i=0; i<data.size(); i+=batchSize){
        if(i + batchSize > data.size()){
            std::vector<Point> batch(data.begin() + i,data.end());
            //learnAlgorithm(batch);
            learnBackpropagation(batch);
        }else {
            std::vector<Point> batch(data.begin() + i,data.begin() + i + batchSize);
            //learnAlgorithm(batch);
            learnBackpropagation(batch);
        }
        applyNetworkGradient(learnValue/batchSize);
        resetNetworkGradient();
    }
}


void NeuralNetwork::applyNetworkGradient(double learnValue){
    for(int layerNB = 0; layerNB<layers.size(); layerNB++){
        layers[layerNB].applyGradientDescent(learnValue);
    }
}


void NeuralNetwork::resetNetworkGradient(){
    for(int layerNB = 0; layerNB<layers.size(); layerNB++){
        layers[layerNB].resetGradients();
    }
}

/*Old gradient Descent algorithm just for learning
void NeuralNetwork::learnAlgorithm(std::vector<Point>trainingData){
    double oldCost = networkCost(trainingData);
    const double change = 0.0001;
    for(int layerNB = 0; layerNB<layers.size(); layerNB++){

        //Gradient Descent for weights
        for(int in=0; in<layers[layerNB].getInputNB(); in++){
            for(int out=0; out<layers[layerNB].getOutputNB(); out++){
                double newWeight = layers[layerNB].getWeight(in,out) + change;
                layers[layerNB].setWeights(in, out, newWeight);
                double costChange = networkCost(trainingData) - oldCost;
                layers[layerNB].weightCostGradient[in][out] = ((costChange)/change);
                layers[layerNB].setWeights(in, out, newWeight - change);
            }
            
        }
        
        for(int out=0; out<layers[layerNB].getOutputNB(); out++){
            double newBias = layers[layerNB].getBias(out) + change;
            layers[layerNB].setBiases(out, newBias);
            double costChange = networkCost(trainingData) - oldCost;
            layers[layerNB].biasCostGradient[out] = costChange/change;
            layers[layerNB].setBiases(out, newBias - change);
        }
        
    }
}
*/


void NeuralNetwork::learnBackpropagation(std::vector<Point> trainingData){
    for(int i=0; i<trainingData.size(); i++){
        applyBackpropagationGradient(trainingData[i]);
    }
}


void NeuralNetwork::applyBackpropagationGradient(Point data){
    std::vector<double> nodeValues;
    calculateOutputs(data.getInputs());
    Layer* outputLayer = &(layers[layers.size()-1]);
    
    nodeValues = outputLayer->nodeCalcBackpropagationValue(data.getResults());
    outputLayer->updateBackpropagationGradients(nodeValues);
    
    
    int nbOfHiddenLayers = layers.size() - 2;
    for(int currentLayer=nbOfHiddenLayers; currentLayer>=0; currentLayer--){
        Layer* hiddenLayer = &(layers[currentLayer]);
        nodeValues = hiddenLayer->nodeCalcBackpropagationHiddenValue(layers[currentLayer+1], nodeValues);
        hiddenLayer->updateBackpropagationGradients(nodeValues);
    }
}


void NeuralNetwork::updateWeights(){
    int biasesIndex = 0;
    int weightIndex = 0;
    for(int i=0; i<layers.size(); i++){
        int layerInput = layers[i].getInputNB();
        int layerOutput = layers[i].getOutputNB();
        for(int out=0; out<layerOutput; out++){
            //layers[i].setBiases(out, GLOBAL::biases[biasesIndex]);
            GLOBAL::biases[biasesIndex] = layers[i].getBias(out);
            biasesIndex++;
            for(int in = 0; in < layerInput; in++){
                //layers[i].setWeights(in, out, GLOBAL::weights[weightIndex]);
                GLOBAL::weights[weightIndex] = layers[i].getWeight(in, out);
                weightIndex++;
            }
        }
    }
}


double NeuralNetwork::singleCost(Point data){
    std::vector<double> output = calculateOutputs(data.getInputs());
    int outputIndex= layers.size()-1;
    double cost = 0;
    
    for(int i=0; i<output.size(); i++){
        cost += layers[outputIndex].cost(output[i], data.getResults(i));
    }
    
    return cost;
    
}


double NeuralNetwork::networkCost(std::vector<Point> data){
    double totalCost = 0;
    for(int i=0; i<data.size(); i++){
        totalCost += singleCost(data[i]);
    }

    return totalCost/data.size();
}