#include "main.h"

// static unsigned int allocations = 0;
// 
// void *operator new (std::size_t size)
// {
//     LOG("Allocations: " << allocations);
//     allocations++;
//     return malloc(size);
// }

int main()
{
    Game game;
    game.execute();
}