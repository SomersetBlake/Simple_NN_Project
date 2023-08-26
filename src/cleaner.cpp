#include "../include/cleaner.h"
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <iterator>

Cleaner::Cleaner(){

}

Cleaner::~Cleaner(){}

template<typename T, typename... Args>
void Cleaner::clean(T *firstArg, Args&&... args){
    clean(firstArg);
    clean(std::forward<Args>(args)...);
}

template<>
void Cleaner::clean<SDL_Window>(SDL_Window *win){
    if(!win)return;
    SDL_DestroyWindow(win);
}
template<>
void Cleaner::clean<SDL_Renderer>(SDL_Renderer *ren){
    if(!ren)return;
    SDL_DestroyRenderer(ren);
}
template<>
void Cleaner::clean<SDL_Texture>(SDL_Texture *tex){
    if(!tex)return;
    SDL_DestroyTexture(tex);
}
template<>
void Cleaner::clean<SDL_Surface>(SDL_Surface *sur){
    if(!sur)return;
    SDL_FreeSurface(sur);
}