#include "Unit.h"

Unit::Unit() {}

Unit::Unit(UnitCategory unit_type, double value) : unit_category(unit_type), conversion_factor(value) {}

double Unit::get_conversion_factor() const
{
        return conversion_factor;
}

UnitCategory Unit::get_unit_category() const
{
        return unit_category;
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

const Unit Unit::FEET(UnitCategory::LENGTH, 12.0);
const Unit Unit::INCH(UnitCategory::LENGTH, 1.0);
const Unit Unit::YARD(UnitCategory::LENGTH, 36.0);
const Unit Unit::CM(UnitCategory::LENGTH, 0.4);