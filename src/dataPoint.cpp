#include "../include/dataPoint.h"
#include <iostream>

    Point::Point(int _x, int _y):x_length(_x),y_length(_y){
        results = {0,0};
        setInputs();
        calculateDanger();
    }

    void Point::setCoords(int _x, int _y){
        x_length = _x;
        y_length = _y;
        setInputs();
        calculateDanger();
    }

    void Point::setInputs(){
        inputs.push_back(x_length);
        inputs.push_back(y_length);
    }

    std::vector<double> Point::getInputs(){
        return inputs;
    }

    double Point::getResults(int nb){
        return results[nb];
    }

    void Point::calculateDanger(){
        //double y = (-3.0/4.0)*(double)x_length+15;
        double y=-1*((x_length-2)*(x_length-2))+50;
        if(y_length <= y){
            dangerous = true;
            results[0] = 0;
            results[1] = 1;
        }
        else{
            dangerous=false;
            results[0] = 1;
            results[1] = 0;
        }
    }

    bool Point::isDangerous(){
        return dangerous;
    }

    void Point::showCoords(){
        std::cout<<"X: "<<x_length<<" Y: "<<y_length<<std::endl;
    }
