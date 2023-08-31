#pragma once
#include <vector>

namespace GLOBAL{
    inline std::vector<double>weights;
    inline std::vector<std::vector<double>> networkWeights;
    inline std::vector<double>biases;
    inline const int y_max = 30;
    inline const int x_max = 45;
    inline int NeuralData = 0;
    inline int ExpectedData = 0;
    inline double AverageCost = 0;
}