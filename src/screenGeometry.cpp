#include "../include/screenGeometry.h"
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_stdinc.h>
#include <cmath>

ScreenGeometry::ScreenGeometry(uint8_t type, SDL_Rect dst, SDL_Color color):type(type),dst(dst),color(color){
    drawShape();
}

ScreenGeometry::~ScreenGeometry(){

}

void ScreenGeometry::drawShape(){
    switch(type){
        case LINE:
                draw_Line();
                break;
                
        case SQUARE:
                
        case FILL_CIRCLE:
                draw_Circle();
                break;
        case HOLLOW_CIRCLE:
                draw_Circle();
                break;
        default:return;
    }
}

void ScreenGeometry::render(){
    drawShape();
}

void ScreenGeometry::update(){

}

void ScreenGeometry::translate(int x, int y){
    dst.x += x;
    dst.y +=y;
    drawShape();
}

void ScreenGeometry::rotate(int angle){
    //to be continued
}

void ScreenGeometry::scale(double scaleSize){
    dst.h *=scaleSize;
    dst.w *= scaleSize;
    drawShape();
}

void ScreenGeometry::draw_Line(){
    for(int i=0; i<Media::SCREEN_WIDTH;i++){

        for(int k=0; k<Media::SCREEN_HEIGHT; k++){
            if(k == std::round((-3.0/4.0)*(double)i+15)){
                SDL_RenderDrawPoint(Media::ren, i, k);
            }
        }

    }
    //SDL_RenderDrawLine(Media::ren, 0, 200, Media::SCREEN_WIDTH, 400);
}

void ScreenGeometry::draw_Circle(){
int radius = dst.w;
    int x = radius -1;
    int y = 0;
    int offsetX = 1;
    int offsetY = 1;
    int err = offsetX - radius*2;

    SDL_SetRenderDrawColor(Media::ren, color.r,color.g,color.b,color.a);
    while(y <= x){
        switch(type){
            case 2:
                    SDL_RenderDrawLine(Media::ren, dst.x - x, dst.y + y, dst.x + x, dst.y + y);
                    SDL_RenderDrawLine(Media::ren, dst.x - y , dst.y + x, dst.x + y, dst.y + x);
                    SDL_RenderDrawLine(Media::ren, dst.x - x, dst.y - y, dst.x + x, dst.y - y);
                    SDL_RenderDrawLine(Media::ren, dst.x - y, dst.y - x, dst.x + y, dst.y - x);
                    break;
            case 3:
                    SDL_RenderDrawPoint(Media::ren,dst.x + x, dst.y - y);
                    SDL_RenderDrawPoint(Media::ren,dst.x + x, dst.y + y);
                    SDL_RenderDrawPoint(Media::ren,dst.x - x, dst.y - y);
                    SDL_RenderDrawPoint(Media::ren,dst.x - x, dst.y + y);
                    SDL_RenderDrawPoint(Media::ren,dst.x + y, dst.y - x);
                    SDL_RenderDrawPoint(Media::ren,dst.x + y, dst.y + x);
                    SDL_RenderDrawPoint(Media::ren,dst.x - y, dst.y - x);
                    SDL_RenderDrawPoint(Media::ren,dst.x - y, dst.y + x);
                    break;
            default:return;
        }
                if(err <= 0){
            y++;
            err += offsetY;
            offsetY += 2;
        }
        
        if(err > 0){
            x--;
            offsetX += 2;
            err += offsetX - radius*2;
        }
    }
}