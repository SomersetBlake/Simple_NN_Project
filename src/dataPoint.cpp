#include "../include/dataPoint.h"
#include <iostream>

    Point::Point(int _x, int _y):x_length(_x),y_length(_y){
        calculateDanger();
    }

    void Point::setCoords(int _x, int _y){
        x_length = _x;
        y_length = _y;
    }

    void Point::calculateDanger(){
        y = x_length - 5;
        if(y_length > y)
        dangerous = true;
        else
        dangerous=false;
    }

    bool Point::isDangerous(){
        return dangerous;
    }

    void Point::showCoords(){
        std::cout<<"X: "<<x_length<<" Y: "<<y_length<<std::endl;
    }
