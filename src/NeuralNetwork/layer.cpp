#include "../../include/NeuralNetwork/layer.h"

    Layer::Layer(){};
    Layer::Layer(int nbOfInput, int nbOfOutput):inputNB(nbOfInput),outputNB(nbOfOutput){
        weights = new double*[inputNB];
        for(int i=0; i<inputNB;i++){
            weights[i] = new double[outputNB];
        }
        biases = new double[outputNB];
    }
    
    double* Layer::calculateLayerOutput(double* inputs){
        double* calculatedOutput = new double[outputNB];
        for(int outgoingNode =0; outgoingNode <outputNB; outgoingNode++){
            calculatedOutput[outgoingNode] = biases[outgoingNode];

            for(int incomingNode = 0; incomingNode < inputNB; incomingNode++){
                weights[incomingNode][outgoingNode] = 0;
                GLOBAL::weights.push_back(weights[incomingNode][outgoingNode]);
                std::cout<<"Pushed"<<std::endl;
                calculatedOutput[outgoingNode] += inputs[incomingNode] * weights[incomingNode][outgoingNode];
            }
        }

        return calculatedOutput;
    }

    Layer::~Layer(){
        for(int i=0; i<inputNB; i++){
            delete weights[i];
        }
        delete weights;
        delete biases;
    }