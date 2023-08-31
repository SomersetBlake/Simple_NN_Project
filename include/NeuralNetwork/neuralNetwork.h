#pragma once
#include "layer.h"
#include "../dataPoint.h"
#include <stdio.h>
#include <stdarg.h>


class NeuralNetwork{
public:
    NeuralNetwork();
    NeuralNetwork(int nbOfLayers, ...);
    ~NeuralNetwork();
    int classifyOutput(std::vector<double> inputs);
    double networkCost(std::vector<Point> data);
    void updateWeights();

private:
    std::vector<Layer> layers;
    int nbOfLayers;

    double singleCost(Point data);
    std::vector<double> calculateOutputs(std::vector<double> inputs);
};