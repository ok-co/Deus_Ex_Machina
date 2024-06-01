#ifndef ATOM_H
#define ATOM_H
#include <vector>

#include "Fundamentals.h"


class Atom {
public:
    Atom(Atom_character character);
    void relations_update(std::vector<int>& relations);
    void force_step(std::vector<Atom*> agents);


private:
    Atom_character character;
};

#endif //ATOM_H