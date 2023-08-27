#include "../../include/NeuralNetwork/neuralNetwork.h"

NeuralNetwork::NeuralNetwork(){
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

NeuralNetwork::~NeuralNetwork(){
}