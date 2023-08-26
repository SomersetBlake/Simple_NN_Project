#include "../include/media.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>


SDL_Renderer* Media::ren = nullptr;
int Media::SCREEN_HEIGHT = 480;
int Media::SCREEN_WIDTH= 640;

Media::Media():running(true){
}

Media::~Media(){
    ImGui_ImplSDLRenderer2_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();
    cleaner.clean(ren);
    cleaner.clean(win);
    IMG_Quit();
    SDL_Quit();
};

int Media::init(const std::string title, int width, int height, bool fullscreen){
    Media::SCREEN_WIDTH = width;
    Media::SCREEN_HEIGHT = height;
    
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
        logError("SDL_Init");
        SDL_Quit();
        return 1;
    }

    if(createWindow(title, width, height) != 0){
        running = false;
    }

    if(createRenderer() != 0){
        running = false;
    }
    
    if((IMG_Init(IMG_INIT_PNG)&IMG_INIT_PNG) != IMG_INIT_PNG){
        logError("IMG_Init");
        SDL_Quit();
        return 1;
    }

    ImGuiInit();
    running = true;
    return 0;
}

int Media::createWindow(const std::string title, int width, int height){
    win = SDL_CreateWindow(title.c_str(), 100, 100, width, height, SDL_WINDOW_SHOWN);
    if(win == nullptr){
        logError("SDL_CreateWindow");
        SDL_Quit();
        return 1;
    }
    return 0;
}

int Media::createRenderer(){
    ren = SDL_CreateRenderer(win, -1,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if(ren == nullptr){
        cleaner.clean(win);
        logError("SDL_CreateRenderer");
        SDL_Quit();
        return 1;
    }
    return 0;
}

int Media::ImGuiInit(){
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    ImGui::StyleColorsDark();
    ImGui_ImplSDL2_InitForSDLRenderer(win, ren);
    ImGui_ImplSDLRenderer2_Init(ren);
    return 0;
}

void Media::handleEvents(SDL_Event &event){
    ImGui_ImplSDL2_ProcessEvent(&event);
    switch(event.type){
        case SDL_QUIT:  running = false;
                        std::cout<<"App close"<<std::endl;
                        break;
        case SDL_KEYDOWN:
                            std::cout<<"Key down"<<std::endl;
                            break;
    }
}


bool Media::isRunning(){
    return running;
}

void Media::closeApp(){
    running = false;
}

void Media::logError(const std::string log){
    std::cout<<log<<" Error: "<<SDL_GetError();
}