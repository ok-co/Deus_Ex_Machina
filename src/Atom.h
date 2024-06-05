#ifndef ATOM_H
#define ATOM_H

#include <vector>

#include "Fundamentals.h"

using std::vector;

class Atom {
public:
    explicit Atom(AtomCharacter character);
    void relationsUpdate(vector<int>& relations);
    void forceStep(vector<Atom*> agents);

private:
    AtomCharacter character;
};

#endif //ATOM_H