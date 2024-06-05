#ifndef FUNDAMENTALS_H
#define FUNDAMENTALS_H

using std::vector;

struct Position
{
    double rx;
    double ry;
};
struct Velocity
{
    double vx;
    double vy;
};
struct Force
{
    double fx;
    double fy;
};
struct Angle
{
    double ang;
    double vang; // angular velocity
};
struct AtomCharacter
{
    // physical properties
    int vertices;
    vector<int> relations;
    int mass;

    // state
    Position position{};
    Velocity velocity{};
    Force force{};
    Angle angle{};
};

double getDistance(Position pos1, Position pos2);


#endif //FUNDAMENTALS_H
