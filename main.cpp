#include "include/mediaController.h"
#include "include/NeuralNetwork/neuralNetwork.h"

int main(int argc, char** argv){

    std::vector<double> inputs = {0.5,0};
    std::vector<double> outputs;
    NeuralNetwork someNetwork(4,2,4,4,2);
    outputs = someNetwork.calculateOutputs(inputs);
    for(int i=0; i<outputs.size(); i++)
        std::cout<<"TestOutputs: "<<outputs[i]<<std::endl;

    MediaController controller;
    controller.run();
}