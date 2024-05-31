#ifndef CELL_H
#define CELL_H
#include <vector>

#include "Atom.h"

class Cell {
public:
    int atoms_count();

private:
    std::vector<Atom> atoms;
};

#endif //CELL_H
