#pragma once
#include "media.h"


class ImguiMenu{
public:
    enum alignment{
        RIGHT,
        BOTTOM,
        LEFT,
        TOP
    };
    ImguiMenu();
    ~ImguiMenu();

    int init(SDL_Renderer *ren, SDL_Window *win);
    void setAlign(float leftCornerX, float leftCornerY, float width, float height);
    void createWindow();
    void render();
    void setItems();
    

    private:
    ImGuiWindowFlags menuFlags;
    ImVec2 menuPos;
    ImVec2 menuSize;
};