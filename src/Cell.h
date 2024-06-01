#ifndef CELL_H
#define CELL_H
#include <vector>

#include "Atom.h"

class Cell {
public:
    int atoms_count();
    void add(Atom_character character);
    void clear();
    void step();
    void add_neighbour(Cell * p_cell);
    void show_neighbour_population(); // debug

private:
    std::vector<Atom> atoms;
    std::vector<Cell *> neighbours; // vector of pointers to all neighbouring (max 8) cells
};

#endif //CELL_H
