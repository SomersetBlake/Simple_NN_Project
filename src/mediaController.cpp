#include "../include/mediaController.h"
#include <SDL2/SDL_blendmode.h>
#include <SDL2/SDL_hints.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_timer.h>
#include <cstdint>
#include <time.h>
#include <cstdlib>

MediaController::MediaController(){
    app = new Media();
    app->init("Graph", 1440, 720);
    setGraphSize(Media::SCREEN_WIDTH*0.1, Media::SCREEN_HEIGHT*0.1, Media::SCREEN_WIDTH*0.9, Media::SCREEN_HEIGHT*0.9);

    for(int i=0; i<5; i++)
    GLOBAL::weights.push_back(0.1);
}

MediaController::~MediaController(){
    delete app;
    for(int i=0;i<objects.size(); i++)
        delete objects[i];
}

void MediaController::run(){
    int frameRate = 1000/60;
    uint32_t startFrame;
    uint32_t delta;


    addObjects();
    drawCircles();

    //main loop
    while(app->isRunning()){
        startFrame = SDL_GetTicks();

        while(SDL_PollEvent(&event)){
            app->handleEvents(event);
        }//while
        renderObjects();
        
        delta = SDL_GetTicks() - startFrame;
        if(delta<frameRate){
            SDL_Delay(frameRate - delta);
        }//if
    }//while
}

void MediaController::renderObjects(){
    SDL_RenderClear(Media::ren);
    for(int i = 0; i<objects.size(); i++){
        objects[i]->render();
    }
    rightMenu.render();
    graphTest();
    SDL_RenderPresent(Media::ren);
}

void MediaController::addObjects(){
    rightMenu.setAlign(graphRect.x_right,0,
    Media::SCREEN_WIDTH-graphRect.x_right, Media::SCREEN_HEIGHT
    );
    ScreenObject* background = new ScreenTexture("resources/background.png");
    objects.push_back(background);

    SDL_Rect linePos = {0,0,0,0};
    SDL_Colour colour = {255,255,255};
    ScreenObject* line = new ScreenGeometry(ScreenGeometry::geometryType::LINE,linePos, colour);
    objects.push_back(line);
}

void MediaController::drawCircles(){
    //Generating Points
    Point* points[GLOBAL::x_max][GLOBAL::y_max];
    for(int i=0;i<GLOBAL::x_max*GLOBAL::y_max;i++){
        points[i%GLOBAL::x_max][i/GLOBAL::x_max] = new Point(i%GLOBAL::x_max,i/GLOBAL::x_max);
    }

    //Circle data
    ScreenGeometry* circles[GLOBAL::x_max * GLOBAL::y_max] ;
    SDL_Color colour = {255,255,255,255};
    int xPos = 0;
    int yPos = 0;
    int x_offset = graphRect.width / GLOBAL::x_max;
    int y_offset = graphRect.height / GLOBAL::y_max;
    int circleSize = x_offset/8;
    int xStart = graphRect.x_left + circleSize;
    int yStart = graphRect.y_left + circleSize;

    for(int i=0; i<GLOBAL::x_max * GLOBAL::y_max; i++){
            if(points[i%GLOBAL::x_max][i/GLOBAL::x_max]->isDangerous()){
                colour = {255,0,0,255};
            }else {
                colour = {255,255,255,255};
            }
            SDL_Rect circlePos = {xStart + xPos,yStart + yPos,circleSize,circleSize};
            circles[i] = new ScreenGeometry(ScreenGeometry::geometryType::FILL_CIRCLE,circlePos,colour);
            objects.push_back(circles[i]);
            xPos = x_offset * (i%GLOBAL::x_max);
            yPos = y_offset * (i/GLOBAL::x_max);
    }//for
}

int MediaController::getGraph_leftCorner(){ return graphRect.x_left;}
int MediaController::getGraph_rightCorner(){ return graphRect.y_left;}
int MediaController::getGraph_bottomRCorner(){ return graphRect.x_right;}
int MediaController::getGraph_bottomLCorner(){ return graphRect.y_right;}
int MediaController::getGraph_width(){ return graphRect.width;}
int MediaController::getGraph_height(){ return graphRect.height;}
void MediaController::setGraphSize(int x1, int y1, int x2, int y2){
    graphRect.x_left = x1;
    graphRect.y_left = y1;
    graphRect.x_right = x2;
    graphRect.y_right = y2;
    graphRect.width = graphRect.x_right - graphRect.x_left;
    graphRect.height = graphRect.y_right - graphRect.y_left;
}

void MediaController::graphTest(){
    int rectSize = 4;
    int startX = graphRect.x_left - rectSize;
    int startY = graphRect.y_left - rectSize;
    SDL_SetRenderDrawBlendMode(Media::ren, SDL_BLENDMODE_BLEND);
    SDL_SetRenderDrawColor(Media::ren, 255, 0, 0, 50);
    for(int i = startX; i<graphRect.x_right-rectSize; i+=rectSize){
        for(int k =startY; k<graphRect.y_right-rectSize;k+=rectSize){
            if(i >= k * GLOBAL::weights[0] * 10 * GLOBAL::weights[1] + GLOBAL::weights[2] * 500 )SDL_SetRenderDrawColor(Media::ren, 255, 0, 0, 50);
            else SDL_SetRenderDrawColor(Media::ren, 255, 255, 255, 50);
            SDL_Rect tempRect = {i,k,rectSize,rectSize};
            SDL_RenderFillRect(Media::ren, &tempRect);
        }
    }

}