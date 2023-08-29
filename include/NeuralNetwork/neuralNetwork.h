#pragma once
#include "layer.h"
#include <stdio.h>
#include <stdarg.h>


class NeuralNetwork{
public:
    NeuralNetwork();
    NeuralNetwork(int nbOfLayers, ...);
    ~NeuralNetwork();
    int classifyOutput(std::vector<double> inputs);
    void updateWeights();

private:
    std::vector<Layer> layers;
    int nbOfLayers;

    std::vector<double> calculateOutputs(std::vector<double> inputs);
};