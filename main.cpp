#include "include/mediaController.h"
#include "include/NeuralNetwork/neuralNetwork.h"

int main(int argc, char** argv){
    std::cout<<"Weight size "<<GLOBAL::weights.size()<<std::endl;

    double* inputs = new double[2];
    inputs[0] = 0.5;
    inputs[1] = 0.5;
    NeuralNetwork someNetwork(3,2,4,2);
    someNetwork.calculateOutputs(inputs);
    MediaController controller;
    controller.run();
    std::cout<<"Nothing To worry"<<std::endl;
    std::cout<<"1.Global Variables: "<<GLOBAL::weights[0]<<" &:"<<&GLOBAL::weights[0]<<std::endl;
    std::cout<<"Weight size "<<GLOBAL::weights.size()<<std::endl;




}