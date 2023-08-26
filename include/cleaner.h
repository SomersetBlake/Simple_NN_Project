#pragma once
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>
#include <iostream>
#include <SDL2/SDL.h>


class Cleaner{
public:
    Cleaner();
    ~Cleaner();
    template<typename T, typename... Args>
    void clean(T *firstArg,Args&&... args);
/*
private:
    template<>
    void clean<SDL_Window>(SDL_Window *win);
    template<>
    void clean<SDL_Renderer>(SDL_Renderer *ren);
    template<>
    void clean<SDL_Texture>(SDL_Texture *tex);
    template<>
    void clean<SDL_Surface>(SDL_Surface *sur);
    

*/
};