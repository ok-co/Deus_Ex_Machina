#ifndef SPACE_H
#define SPACE_H
#include <vector>

#include "Cell.h"


class Space {
public:
    Space(int dimension, int divisions);
    void show_cells_populations();
    void create(Atom_character character);
    std::vector<std::vector<Cell>> grid;    // vector of cells representing flattened grid

private:
    int dimension;              // size of a space in which simulation occurs (square side size)
    int divisions;              // number of divisions in one row/column (square root of number of cells)
};

#endif //SPACE_H