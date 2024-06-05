#include <iostream>

#include "Space.h"

#include "Console.h"

using std::vector;

Space::Space(int dimension, int divisions)
{
    this->dimension = dimension;
    this->divisions = divisions;

    grid = vector<vector<Cell>>(divisions, vector<Cell> (divisions)); // n x n matrix of Cells, where n = divisions

    // creating neighbors pointers vector
    std::pair<int, int> neighbor_vectors[8] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1, 0}, {1,1}};
    for(int i = 0; i < divisions; ++i)
    {
        for(int j = 0; j < divisions; ++j)
        {
            for (std::pair<int, int> vec : neighbor_vectors)
            {
                //calculating position of neighbor cell index
                int neighbor_i = i + vec.first;
                int neighbor_j = j + vec.second;

                if (neighbor_i < 0 || neighbor_i > divisions || neighbor_j < 0 || neighbor_j > divisions)
                {
                    continue;
                }

                grid[i][j].addNeighbor(&grid[neighbor_i][neighbor_j]);

                Console* console = Console::getInstance();
                console->addEntry({"Space created", Entry::standard});
            }
        }
    }
}

void Space::showCellsPopulation() const
{
    for(size_t i = 0; i < divisions; ++i)
    {
        for(size_t j = 0; j < divisions; ++j)
        {
            std::cout << grid[i][j].atomsCount() << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void Space::create(const AtomCharacter& character)
{
    int dest_i = character.position.ry / (dimension / divisions);
    int dest_j = character.position.rx / (dimension / divisions);

    grid[dest_i][dest_j].add(character);
}


