#include "Quantity.h"
Quantity::Quantity(Unit input_unit, double input_value) : unit(input_unit), value(input_value) {}

bool Quantity::operator==(Quantity other) const
{
    if (this->unit.get_unit_category() != other.unit.get_unit_category())
        return false;
    if (this->unit == other.unit)
        return this->value == other.value;
    return (this->convert_to_base() == other.convert_to_base());
}

double Quantity::convert_to_base() const
{
    return this->value * this->unit.get_conversion_factor();
}

double Quantity::add_quantity(Quantity other) const
{
    return this->convert_to_base() + other.convert_to_base();
}