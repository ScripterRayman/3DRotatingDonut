#pragma once

#include "engine.h"
#include "utils.h"

class Game : public Nevergine::Engine
{
    public:
        Game();

        void init() override;
        void processEvents() override;
        void update() override;
        void render() override;
        void execute() override;

        ~Game();
};