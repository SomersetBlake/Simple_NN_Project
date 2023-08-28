#include "../../include/NeuralNetwork/layer.h"
#include <vector>

    Layer::Layer(){
    };

    Layer::Layer(int nbOfInput, int nbOfOutput):inputNB(nbOfInput),outputNB(nbOfOutput){
        std::vector<double> tempVec;
        for(int i=0; i<inputNB; i++){
            for(int k=0; k<outputNB; k++){
                tempVec.push_back(.5);
            }
            weights.push_back(tempVec);
            GLOBAL::networkWeights.push_back(tempVec);
        }
        weights[0][0] = 0;
        GLOBAL::networkWeights[0][0] = 0;
        
    }
    
    std::vector<double> Layer::calculateLayerOutput(std::vector<double> inputs){

        std::vector<double> calculatedOutput;
        std::cout<<"CalculateLayerOut input: "<<inputNB<<" Output: "<<outputNB<<std::endl;
        for(int outgoingNode = 0; outgoingNode < outputNB; outgoingNode++){
            biases.push_back(1);
            GLOBAL::biases.push_back(biases[outgoingNode]);
            calculatedOutput.push_back(biases[outgoingNode]);
            for(int incomingNode = 0; incomingNode < inputNB; incomingNode++){
                GLOBAL::weights.push_back(weights[incomingNode][outgoingNode]);
                calculatedOutput[outgoingNode] += inputs[incomingNode] * weights[incomingNode][outgoingNode];
            }
        }
        return calculatedOutput;
    }

        Layer::~Layer(){

    }