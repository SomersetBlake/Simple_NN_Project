#pragma once

class Point{
    public:
    double y;
    Point(int _x, int _y);
    void setCoords(int _x, int _y);
    void calculateDanger();
    bool isDangerous();
    void showCoords();

    private:
    int x_length;
    int y_length;
    bool dangerous;
    
};