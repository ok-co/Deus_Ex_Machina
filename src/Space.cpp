#include "Space.h"

#include <iostream>

Space::Space(int dimension, int divisions)
{
    this->dimension = dimension;
    this->divisions = divisions;

    grid = std::vector<std::vector<Cell>>(divisions, std::vector<Cell> (divisions)); // n x n matrix of Cells, where n = divisions

}

void Space::show_cells_populations()
{
    for(size_t i = 0; i < divisions; ++i)
    {
        for(size_t j = 0; j < divisions; ++j)
        {
            std::cout << grid[i][j].atoms_count() << " ";
        }
        std::cout << "\n";
    }
}


