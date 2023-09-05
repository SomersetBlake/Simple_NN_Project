#pragma once
#include <vector>

class Point{
public:
    Point(int _x, int _y);
    void setCoords(int _x, int _y);
    void calculateDanger();
    bool isDangerous();
    void showCoords();
    void setInputs();
    std::vector<double> getInputs();
    double getResults(int nb);
    std::vector<double> getResults();

private:
    int x_length;
    int y_length;
    std::vector<double> inputs;
    std::vector<double> results;
    bool dangerous;
    
};