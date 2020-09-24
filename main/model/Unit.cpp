#include "Unit.h"

Unit::Unit() {}

Unit::Unit(double value) : conversion_factor(value) {}

double Unit::get_conversion_factor() const
{
        return conversion_factor;
}

bool Unit::operator==(Unit other) const
{
        return (this->conversion_factor == other.conversion_factor);
}

bool Unit::operator==(Unit *other) const
{
        if (other == nullptr)
        {
                return false;
        }
        return (this->conversion_factor == other->conversion_factor);
}

bool Unit::operator!=(Unit *other) const
{
        return !(this == other);
}

bool Unit::operator!=(Unit other) const
{
        return !(*this == other);
}

const Unit Unit::FEET(12.0);
const Unit Unit::INCH(1.0);
const Unit Unit::YARD(36.0);
const Unit Unit::CM(0.4);