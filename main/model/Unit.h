class Unit
{
    double conversion_factor;
    Unit(double);

public:
    Unit();
    bool operator==(Unit) const;
    bool operator==(Unit *) const;
    bool operator!=(Unit) const;
    bool operator!=(Unit *) const;
    double get_conversion_factor() const;
    
    static const Unit FEET, INCH, YARD, CM;
};