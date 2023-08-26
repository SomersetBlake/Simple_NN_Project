#pragma once
#include "../global.h"
#include <iostream>

class Layer{
public:
    Layer();
    Layer(int nbOfInput, int nbOfOutput);
    ~Layer();
    double* calculateLayerOutput(double* inputs);

private:
    int inputNB;
    int outputNB;
    double** weights; //later to be optimized
    double* biases;
};