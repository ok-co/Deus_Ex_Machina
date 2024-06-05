#include <iostream>
#include <utility>

#include "Cell.h"
#include "Console.h"

int Cell::atomsCount() const
{
    return static_cast<int>( atoms.size() );
}

void Cell::add(AtomCharacter character)
{
    atoms.emplace_back(std::move(character));
}

void Cell::clear()
{
    atoms.clear();

    // Console entry

    Console* console = Console::getInstance();
    console->addEntry({"Cell cleared", Entry::standard});
}

void Cell::addNeighbor(Cell* p_cell)
{
    neighbors.push_back(p_cell);
}

void Cell::showNeighborPopulation()
{
    for (Cell* cell : neighbors)
    {
        std::cout << cell->atomsCount() << " ";
    }
    std::cout << "\n";
}
