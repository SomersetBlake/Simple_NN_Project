#pragma once

#include "screenObject.h"
#include <SDL2/SDL_stdinc.h>
#include <cstdint>

class ScreenGeometry:public ScreenObject{
public:
    enum geometryType{
        LINE = 0,
        SQUARE,
        FILL_CIRCLE,
        HOLLOW_CIRCLE
    };
    ScreenGeometry(uint8_t type, SDL_Rect dst, SDL_Color color);
    ~ScreenGeometry();
    void render() override;
    void update() override;
    void translate(int x, int y) override;
    void scale(double scaleSize) override;
    void rotate(int angle) override;
    void drawShape();
    

private:
    const int type;
    SDL_Rect src;
    SDL_Rect dst;
    SDL_Color color;
    void draw_Circle();
    void draw_Line();

};