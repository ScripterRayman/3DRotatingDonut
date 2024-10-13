#pragma once

#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>

#ifdef NV_DEBUG
    #define LOG(x) std::cout << x << std::endl
    #define ERR(x) std::cerr << x << std::endl
#elif defined(NV_RELEASE)
    #define LOG(x)
    #define ERR(x)
#endif

namespace Nevergine
{
    class Engine
    {
        private:
            static const int WINDOW_WIDTH = 1280;
            static const int WINDOW_HEIGHT = 700;

            bool running = true;
            SDL_Event e;
        
        public:
            SDL_Window *window;
            SDL_Renderer *renderer;

            Engine();

            virtual void init();
            virtual void processEvents();
            virtual void update();
            virtual void render();
            virtual void execute();

            ~Engine();
    };
};