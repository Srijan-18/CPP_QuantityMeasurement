#include <iostream>
using namespace std;

class Feet
{
    double value;

public:
    Feet(double value);
    bool operator==(Feet) const;
    bool operator==(Feet *) const;
};