#include "../../include/NeuralNetwork/layer.h"
#include <iterator>
#include <vector>
#include <math.h>

    Layer::Layer(){
    };

    Layer::~Layer(){

    }

    Layer::Layer(int nbOfInput, int nbOfOutput):inputNB(nbOfInput),outputNB(nbOfOutput){
        std::vector<double> tempVec;
        for(int i=0; i<inputNB; i++){
            for(int k=0; k<outputNB; k++){
                tempVec.push_back(.5);
                GLOBAL::weights.push_back(0);
            }
            weights.push_back(tempVec);
            biases.push_back(0);
            GLOBAL::biases.push_back(0);
        }
    }
    
    std::vector<double> Layer::calculateLayerOutput(std::vector<double> inputs){

        std::vector<double> calculatedOutput;
        for(int i=0;i<outputNB;i++)
            calculatedOutput.push_back(0);

        for(int outgoingNode = 0; outgoingNode < outputNB; outgoingNode++){
            calculatedOutput[outgoingNode] = biases[outgoingNode];
            for(int incomingNode = 0; incomingNode < inputNB; incomingNode++){
                calculatedOutput[outgoingNode] += inputs[incomingNode] * weights[incomingNode][outgoingNode];
            }
            calculatedOutput[outgoingNode] = activationFunction(calculatedOutput[outgoingNode]);
        }

        return calculatedOutput;
    }

    double Layer::activationFunction(double weightedOutput){
        return (1/(1+exp(-1*weightedOutput)));
    }

    void Layer::setWeights(int inputIndex, int outputIndex, double value){
        weights[inputIndex][outputIndex] = value;
    }
    void Layer::setBiases(int outputIndex, double value){
        biases[outputIndex] = value;
    }

    int Layer::getInputNB(){return inputNB;}
    int Layer::getOutputNB(){return outputNB;}