#include "../../include/NeuralNetwork/layer.h"
#include <cstdlib>
#include <iterator>
#include <vector>
#include <math.h>
#include <time.h>

    Layer::Layer(){
    };

    Layer::~Layer(){

    }

    Layer::Layer(int nbOfInput, int nbOfOutput):inputNB(nbOfInput),outputNB(nbOfOutput){
        generateRandomWeights();
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

    double Layer::cost(double calculatedOutput, double expectedOutput){
        double cost = expectedOutput - calculatedOutput;
        return cost*cost;
    }


    double Layer::activationFunction(double weightedOutput){
        return (1/(1+exp(-1*weightedOutput)));
    }

    void Layer::applyGradientDescent(double learnValue){
        for(int out=0; out<outputNB; out++){
            for(int in=0; in<inputNB; in++){
                weights[in][out] -= weightCostGradient[in][out] * learnValue;
            }
            biases[out] -= biasCostGradient[out] * learnValue;
        }
    }

    void Layer::generateRandomWeights(){
    srand(time(0));
    std::vector<double> tempVec;
    double rnd = 0.6;
    for(int i=0; i<inputNB; i++){
        for(int k=0; k<outputNB; k++){
            rnd = ((double)rand() / (double)(RAND_MAX)) ;
            tempVec.push_back(rnd);
            GLOBAL::weights.push_back(rnd);
        }
        weights.push_back(tempVec);
        weightCostGradient.push_back(tempVec);
        }
        
        for(int k=0; k<outputNB; k++){
        rnd = ((double)rand() / (double)(RAND_MAX)) ;
        biases.push_back(rnd);
        biasCostGradient.push_back(rnd);
        GLOBAL::biases.push_back(rnd);
        }

    }


    void Layer::setWeights(int inputIndex, int outputIndex, double value){
        weights[inputIndex][outputIndex] = value;
    }
    void Layer::setBiases(int outputIndex, double value){
        biases[outputIndex] = value;
    }
    double Layer::getWeight(int inputIndex, int outputIndex){
        return weights[inputIndex][outputIndex];
    }
    double Layer::getBias(int outputIndex){
        return biases[outputIndex];
    }
    int Layer::getInputNB(){return inputNB;}
    int Layer::getOutputNB(){return outputNB;}