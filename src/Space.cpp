#include "Space.h"

#include <iostream>

Space::Space(int dimension, int divisions)
{
    this->dimension = dimension;
    this->divisions = divisions;

    grid = std::vector<std::vector<Cell>>(divisions, std::vector<Cell> (divisions)); // n x n matrix of Cells, where n = divisions

    // creating neighbours pointers vector
    std::pair<int, int> neigbour_vectors[8] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1, 0}, {1,1}};
    for(size_t i = 0; i < divisions; ++i)
    {
        for(size_t j = 0; j < divisions; ++j)
        {
            for (std::pair<int, int> vec : neigbour_vectors)
            {
                //calculating position of neighbour cell index
                int neighbour_i = i + vec.first;
                int neighbour_j = j + vec.second;

                if (neighbour_i < 0 || neighbour_i > divisions || neighbour_j < 0 || neighbour_j > divisions)
                {
                    continue;
                }

                grid[i][j].add_neighbour(&grid[neighbour_i][neighbour_j]);
            }
        }
    }
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
    std::cout << "\n";
}

void Space::create(Atom_character character)
{
    int dest_i = character.position.ry / (dimension / divisions);
    int dest_j = character.position.rx / (dimension / divisions);

    grid[dest_i][dest_j].add(character);
}


