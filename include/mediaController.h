#pragma once
#include "media.h"
#include "screenTexture.h"
#include "screenGeometry.h"
#include "screenObject.h"
#include "dataPoint.h"
#include "ImguiMenu.h"


class MediaController{
public:

    MediaController();
    ~MediaController();
    
    void run();

    void setGraphSize(int x1, int x2, int x3, int x4);
    int getGraph_leftCorner();
    int getGraph_rightCorner();
    int getGraph_bottomRCorner();
    int getGraph_bottomLCorner();
    int getGraph_width();
    int getGraph_height();

private:
    Media* app;
    SDL_Event event;
    std::vector<ScreenObject*> objects;
    ImguiMenu rightMenu;
    struct {
        int x_left;
        int y_left;
        int x_right;
        int y_right;
        int width;
        int height;
    } graphRect;
    void renderObjects();
    void addObjects();
    void imguiRenderWindow();
    void drawCircles();
    void graphTest();
};