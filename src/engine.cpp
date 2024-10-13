#include "engine.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>

Nevergine::Engine::Engine()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        ERR("SDL Failed to initialize" << SDL_GetError());
        SDL_Quit();
    }

    window = SDL_CreateWindow("Title", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
                 WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

    if (!window)
    {
        ERR("Failed to Create Window!" << SDL_GetError());
        SDL_DestroyWindow(this->window);
        SDL_Quit();
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (!renderer)
    {
        ERR("Failed to create Renderer!" << SDL_GetError());
        SDL_DestroyWindow(this->window);
        SDL_DestroyRenderer(this->renderer);
        SDL_Quit();
    }
}

void Nevergine::Engine::init()
{

}

void Nevergine::Engine::processEvents()
{
    while (SDL_PollEvent(&e))
    {
        if (e.type == SDL_QUIT)
        {
            running = false;
        }
        else if (e.type == SDL_KEYUP)
        {
            if (e.key.keysym.sym == SDLK_ESCAPE) // Corrected line
            {
                running = false;
            }
        }
    }
}

void Nevergine::Engine::update()
{

}

void Nevergine::Engine::render()
{
    // Clear and render as before
    SDL_SetRenderDrawColor(Nevergine::Engine::renderer, 0, 0, 0, 255);
    SDL_RenderClear(Nevergine::Engine::renderer);
    
    SDL_SetRenderDrawColor(Nevergine::Engine::renderer, 255, 255, 255, 255);
}

void Nevergine::Engine::execute()
{
    init();

    while (running)
    {
        processEvents();
        update();
        render();
    }
}

Nevergine::Engine::~Engine()
{
    SDL_DestroyWindow(this->window);
    SDL_DestroyRenderer(this->renderer);
    SDL_Quit();
}