#include "Feet.h"

Feet::Feet(double value)
{
        this->value = value;
}

bool Feet::operator==(Feet other) const
{
        return (this->value == other.value);
}

bool Feet::operator== (Feet *other) const {
        if(other == nullptr) {
                return false;
        }
        return (this->value == other->value);
}