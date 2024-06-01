#include <iostream>

#include "Space.h"


int main()
{

    Space s(10, 10);

    s.create({3, {0,0,0}, 1, {3,3}, {0,0}, {0,0}, {0,0}});

    s.show_cells_populations();

    s.grid[2][2].show_neighbour_population();


    return 0;
}

