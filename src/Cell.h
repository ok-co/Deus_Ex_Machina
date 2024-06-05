#ifndef CELL_H
#define CELL_H

#include <vector>

#include "Atom.h"

using std::vector;

class Cell {
public:
    [[nodiscard]] int atomsCount() const;
    void add(AtomCharacter character);
    void clear();
    void addNeighbor(Cell* p_cell);
    void showNeighborPopulation(); // debug

private:
    vector<Atom> atoms;
    vector<Cell *> neighbors; // vector of pointers to all neighboring (max 8) cells
};

#endif //CELL_H
