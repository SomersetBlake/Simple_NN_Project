#include "include/mediaController.h"
#include "include/NeuralNetwork/neuralNetwork.h"

int main(int argc, char** argv){

    std::vector<double> inputs = {0.5,0};
    int outputs;
    //NeuralNetwork someNetwork(4,2,4,4,2);
    //outputs = someNetwork.classifyOutputs(inputs);

    MediaController controller;
    controller.run();
}