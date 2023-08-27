#pragma once
#include "layer.h"
#include <stdio.h>
#include <stdarg.h>


class NeuralNetwork{
public:
    NeuralNetwork();
    NeuralNetwork(int nbOfLayers, ...);
    ~NeuralNetwork();
    std::vector<double> calculateOutputs(std::vector<double> inputs);

private:
    std::vector<Layer> layers;
    int nbOfLayers;
};