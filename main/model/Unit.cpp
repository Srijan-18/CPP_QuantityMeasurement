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
        if (other == nullptr || this->unit_category != other->unit_category)
                return false;
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
const Unit Unit::LITRE(UnitCategory::VOLUME, 1.0);
const Unit Unit::GALLON(UnitCategory::VOLUME, 3.78);
const Unit Unit::MILLI_LITRE(UnitCategory::VOLUME, 0.001);
const Unit Unit::KILO_GRAMS(UnitCategory::WEIGHT, 1.0);
const Unit Unit::GRAMS(UnitCategory::WEIGHT, 0.001);
const Unit Unit::TONNE(UnitCategory::WEIGHT, 1000.0);