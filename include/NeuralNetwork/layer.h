#pragma once
#include "../global.h"
#include <iostream>
#include <vector>

class Layer{
public:
    std::vector<double> biasCostGradient;
    std::vector<std::vector<double>> weightCostGradient;

    Layer();
    Layer(int nbOfInput, int nbOfOutput);
    ~Layer();
    void generateRandomWeights();
    std::vector<double> calculateLayerOutput(std::vector<double> inputs);
    double activationFunction(double weightedOutput);
    double activationDerivative(double weightedOutput);
    double cost(double calculatedOutput, double expectedOutput);
    double costDerivative(double calculatedOutput, double expectedOutput);
    std::vector<double> nodeCalcBackpropagationValue(std::vector<double> expectedOutput);
    std::vector<double> nodeCalcBackpropagationHiddenValue(Layer earlierLayer, std::vector<double> earlierNodes);
    void updateBackpropagationGradients(std::vector<double> nodeValues);
    void applyGradientDescent(double learnValue);
    void resetGradients();
    
    
    void setWeights(int inputIndex, int outputIndex, double value);
    void setBiases(int outputIndex, double value);
    double getWeight(int inputIndex, int outputIndex);
    double getBias(int outputIndex);
    int getInputNB();
    int getOutputNB();

private:
    int inputNB;
    int outputNB;
    std::vector<std::vector<double>> weights; 
    std::vector<double> biases;
    std::vector<double> activationOutput;
    std::vector<double> weightedOutput;
    std::vector<double> inputNodes;
};