#pragma once
#include "../global.h"
#include <iostream>

class Layer{
public:
    Layer();
    Layer(int nbOfInput, int nbOfOutput);
    ~Layer();
    std::vector<double> calculateLayerOutput(std::vector<double> inputs);

private:
    int inputNB;
    int outputNB;
    std::vector<std::vector<double>> weights; 
    std::vector<double> biases;
};