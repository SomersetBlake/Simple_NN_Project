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

void NeuralNetwork::updateWeights(){
    int biasesIndex = 0;
    int weightIndex = 0;
    for(int i=0; i<nbOfLayers; i++){
        int layerInput = layers[i].getInputNB();
        int layerOutput = layers[i].getOutputNB();
        for(int out=0; out<layerOutput; out++){
            layers[i].setBiases(out, GLOBAL::biases[biasesIndex]);
            biasesIndex++;
            for(int in = 0; in < layerInput; in++){
                layers[i].setWeights(in, out, GLOBAL::weights[weightIndex]);
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