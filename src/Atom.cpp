#include "Atom.h"

#include <stdexcept>

Atom::Atom(Atom_character character)
{
    this->character = character;
}


void Atom::force_step(std::vector<Atom*> agents)
{

}

void Atom::relations_update(std::vector<int>& relations)
{
    if (relations.size() != character.vertices)
    {
        throw std::invalid_argument("Wrong array size!");
    }

    this->character.relations = relations;
}
