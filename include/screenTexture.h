#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_render.h>
#include <iostream>
#include "screenObject.h"

class ScreenTexture: public ScreenObject{
public:
    ScreenTexture(const std::string _image_path);
    ScreenTexture(const std::string _image_path, SDL_Rect _src, SDL_Rect _dst);
    ~ScreenTexture();
    void sliceTexture(SDL_Rect _src);
    void setPosition(SDL_Rect _dst);
    void changeTexture(const std::string _image_path);
    void update() override;
    void render() override;
    void rotate(int angle) override;
    void translate(int x, int y) override;
    void scale(double scaleSize) override;
    
protected:
    std::string image_path;
    SDL_Texture *image;
    SDL_Rect src,dst;
};