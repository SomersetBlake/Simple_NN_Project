#include "include/mediaController.h"
#include "include/NeuralNetwork/neuralNetwork.h"

int main(int argc, char** argv){

    std::vector<double> inputs = {0.5,0.5};
    NeuralNetwork someNetwork(3,2,4,2);
    someNetwork.calculateOutputs(inputs);

    MediaController controller;
    controller.run();
}