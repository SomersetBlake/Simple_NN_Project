#include "../../include/NeuralNetwork/neuralNetwork.h"

NeuralNetwork::NeuralNetwork(){}

NeuralNetwork::NeuralNetwork(int nbOfLayers, ...):nbOfLayers(nbOfLayers){
    layers = new Layer[nbOfLayers];
    va_list nodes;
    va_start(nodes, nbOfLayers);
    int inNb = va_arg(nodes, int);
    int outNb;
    for(int i = 0; i<nbOfLayers-1; i++){
        outNb = va_arg(nodes, int);
        layers[i] = Layer(inNb,outNb);
        inNb = outNb;
    }
    va_end(nodes);
}

double* NeuralNetwork::calculateOutputs(double* inputs){
    double* outputs;
    outputs = inputs;
    for(int i=0; i<nbOfLayers-1; i++){
        std::cout<<"Somewing"<<std::endl;
        outputs = layers[i].calculateLayerOutput(outputs);
    }
    return outputs;
}

NeuralNetwork::~NeuralNetwork(){
    delete layers;
}