#pragma once
#include "media.h"

class ScreenObject{
public:
    virtual ~ScreenObject(){}
    virtual void render()=0;
    virtual void update()=0;
    virtual void translate(int x, int y)=0;
    virtual void scale(double scaleSize) = 0;
    virtual void rotate(int angle)=0;
};

