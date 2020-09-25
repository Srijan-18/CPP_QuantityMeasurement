#include "Unit.h"

class Quantity
{
    Unit unit;
    double value;
    double temperature_conversion() const;

public:
    double convert_to_base() const;
    Quantity(Unit, double);
    bool operator==(Quantity) const;
    double add_quantity(Quantity) const;
};