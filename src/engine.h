#ifndef ENGINE_H
#define ENGINE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>

#ifdef NV_DEBUG
    #define LOG(x) std::cout << x << std::endl
#elif defined(NV_RELEASE)
    #define LOG(x)
#endif

class Engine
{
    private:
        
};

#endif