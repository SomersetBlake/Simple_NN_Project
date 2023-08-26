#pragma once
#include "layer.h"
#include <stdio.h>
#include <stdarg.h>


class NeuralNetwork{
public:
    NeuralNetwork();
    NeuralNetwork(int nbOfLayers, ...);
    ~NeuralNetwork();
    double* calculateOutputs(double* inputs);

private:
    Layer* layers;
    int nbOfLayers;
};