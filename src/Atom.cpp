#include <stdexcept>

#include "Atom.h"
#include "Console.h"

using std::vector;

Atom::Atom(AtomCharacter character)
{
    this->character = character;

    Console* console = Console::getInstance();
    console->addEntry({"Atom created", Entry::standard});
}



void Atom::relationsUpdate(vector<int>& relations)
{
    if (relations.size() != character.vertices)
    {
        Console* console = Console::getInstance();
        console->addEntry({"Wrong array size!", Entry::error});

        throw std::invalid_argument("Wrong array size!");
    }

    this->character.relations = relations;
}
