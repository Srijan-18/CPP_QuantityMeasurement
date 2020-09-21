#include "Feet.h"

Feet::Feet(double value)
{
        this->value = value;
}

bool Feet::operator==(Feet other) const
{
        return (this->value == other.value);
}