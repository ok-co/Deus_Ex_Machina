#ifndef FUNDAMENTALS_H
#define FUNDAMENTALS_H

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
struct Atom_character
{
    // physical properties
    int vertices;
    std::vector<int> relations;
    int mass;

    // state
    Position position{};
    Velocity velocity{};
    Force force{};
    Angle angle{};
};

#endif //FUNDAMENTALS_H
