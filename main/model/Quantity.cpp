#include "Quantity.h"

Quantity::Quantity(Unit input_unit, double input_value) : unit(input_unit), value(input_value) {}

bool Quantity::operator==(Quantity other) const
{
    if (this->unit == other.unit)
        return this->value == other.value;
    return (this->value * this -> unit.get_conversion_factor() == other.value * other.unit.get_conversion_factor());
}