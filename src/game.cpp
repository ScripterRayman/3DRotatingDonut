#include "game.h"

Game::Game()
{
}

void Game::init()
{
    Nevergine::Engine::init();
}

void Game::processEvents()
{
    Nevergine::Engine::processEvents();
}

void Game::update()
{
    Nevergine::Engine::update();
}


void Game::render()
{
    Nevergine::Engine::render();
    
    drawTriangle(Nevergine::Engine::renderer, 100, 100, 200, 300, 300, 100);

    SDL_RenderPresent(Nevergine::Engine::renderer);
}

void Game::execute()
{
    Nevergine::Engine::execute();
}

Game::~Game()
{
}