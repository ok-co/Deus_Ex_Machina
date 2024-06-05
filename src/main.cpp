#include <iostream>

#include "Console.h"
#include "Space.h"


int main()
{
    Space s(10, 10);

    s.create({3, {0,0,0}, 1, {3,3}, {0,0}, {0,0}, {0,0}});

    s.showCellsPopulation();

    s.grid[2][2].showNeighborPopulation();
    s.grid[2][2].clear();

    Console* console = Console::getInstance();
    std::cout << console->lastEntry().body << "\n";

    std::vector<int> a = {0,1,2,3,4};
    std::cout << a.size() << "\n";

    std::cout << getDistance({0,1}, {0,1});


    return 0;
}

