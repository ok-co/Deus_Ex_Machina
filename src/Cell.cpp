#include "Cell.h"

#include <iostream>
#include <utility>


int Cell::atoms_count()
{
    return static_cast<int>( atoms.size() );
}

void Cell::add(Atom_character character)
{
    atoms.emplace_back(std::move(character));
}

void Cell::clear()
{
    atoms.clear();
}

void Cell::step()
{

}

void Cell::add_neighbour(Cell* p_cell)
{
    neighbours.push_back(p_cell);
}

void Cell::show_neighbour_population()
{
    for (Cell* cell : neighbours)
    {
        std::cout << cell->atoms_count() << " ";
    }
    std::cout << "\n";
}
