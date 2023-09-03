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
    double cost(double calculatedOutput, double expectedOutput);
    void applyGradientDescent(double learnValue);
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
};