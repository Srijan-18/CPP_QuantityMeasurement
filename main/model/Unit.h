#include "../enums/UnitCategory.cpp"
class Unit
{
    double conversion_factor;
    UnitCategory unit_category;
    Unit(UnitCategory, double);

public:
    Unit();
    bool operator==(Unit) const;
    bool operator==(Unit *) const;
    bool operator!=(Unit) const;
    bool operator!=(Unit *) const;
    double get_conversion_factor() const;
    UnitCategory get_unit_category() const;
    
    static const Unit FEET, INCH, YARD, CM;
};