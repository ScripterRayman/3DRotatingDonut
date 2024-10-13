#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>

void drawTriangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3);
void drawFillTriangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3);