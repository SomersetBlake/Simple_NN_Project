#pragma once
#include <SDL2/SDL_events.h>
#include <vector>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <iostream>
#include <SDL2/SDL.h>
#include "cleaner.h"
#include "global.h"
#include "../imgui/imgui.h"
#include "../imgui/imgui_impl_sdl2.h"
#include "../imgui/imgui_impl_sdlrenderer2.h"


class Media{
public:
    Media();
    ~Media();    
    int init(const std::string title, int width, int height, bool fullscreen = false);
    int createRenderer();
    int createWindow(const std::string title, int width, int height);
    int ImGuiInit();
    void handleEvents(SDL_Event &event);
    bool isRunning();
    void closeApp();

    static void logError(const std::string log);
    static SDL_Renderer *ren;
    static int SCREEN_WIDTH;
    static int SCREEN_HEIGHT;
private:
    Cleaner cleaner;
    SDL_Window *win;
    bool running;
};