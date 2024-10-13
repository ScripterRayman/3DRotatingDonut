#include "utils.h"

void drawTriangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3)
{
    // Set the drawing color for the renderer (white in this case)
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    // Draw the three lines of the triangle
    SDL_RenderDrawLine(renderer, x1, y1, x2, y2);  // Line from (x1, y1) to (x2, y2)
    SDL_RenderDrawLine(renderer, x2, y2, x3, y3);  // Line from (x2, y2) to (x3, y3)
    SDL_RenderDrawLine(renderer, x3, y3, x1, y1);  // Line from (x3, y3) to (x1, y1)

    // Update the screen with any drawing
    SDL_RenderPresent(renderer);
}

void drawFillTriangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3)
{
    // Pass the arguments to the filledTrigonRGBA function from SDL_gfx
    // Set the triangle color to white with full opacity (255, 255, 255, 255)
    filledTrigonRGBA(renderer, x1, y1, x2, y2, x3, y3, 255, 255, 255, 255);
}