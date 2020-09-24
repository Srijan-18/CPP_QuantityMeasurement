#include "Unit.h"

class Quantity
{
    Unit unit;
    double value;
    double convert_to_base() const;

public:
    Quantity(Unit, double);
    bool operator==(Quantity) const; 
};