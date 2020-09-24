#include "Unit.h"

class Quantity
{
    Unit unit;
    double value;

public:
    Quantity(Unit, double);
    bool operator==(Quantity) const; 
};