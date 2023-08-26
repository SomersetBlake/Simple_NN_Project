#include "../include/screenTexture.h"
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>

ScreenTexture::~ScreenTexture(){};

ScreenTexture::ScreenTexture(const std::string _image_path):
image_path(_image_path),src({0,0,0,0}),dst({0,0,Media::SCREEN_WIDTH,Media::SCREEN_HEIGHT}){
    changeTexture(image_path);
}

ScreenTexture::ScreenTexture(const std::string _image_path, SDL_Rect src, SDL_Rect dst):
image_path(_image_path),src(src),dst(dst){
    changeTexture(image_path);
}

void ScreenTexture::changeTexture(const std::string _image_path){
    image_path = _image_path;
    image = IMG_LoadTexture(Media::ren, image_path.c_str());
    if(image == nullptr){
        Media::logError("IMG_LoadTexture");
    }
}

void ScreenTexture::sliceTexture(SDL_Rect _src){
    src = _src;
}

void ScreenTexture::setPosition(SDL_Rect _dst){
    dst = _dst;
}

void ScreenTexture::render(){
    SDL_RenderCopy(Media::ren, image, NULL,&dst);
}

void ScreenTexture::update(){}

void ScreenTexture::translate(int x, int y){
    dst.x += x;
    dst.y += y;
}

void ScreenTexture::rotate(int angle){
    //coming soon
}

void ScreenTexture::scale(double scaleSize){
    dst.w *= scaleSize;
    dst.h *= scaleSize;
}