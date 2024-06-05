#include <cmath>
#include <vector>

#include "Fundamentals.h"

using std::vector;

double getDistance(Position pos1, Position pos2)
{
    return sqrt(pow(fabs(pos1.rx - pos2.rx), 2) + pow(fabs(pos1.ry - pos2.ry), 2));
}

