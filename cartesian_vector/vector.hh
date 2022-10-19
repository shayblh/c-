#pragma once

#include <ostream>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(/*args*/);
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    // More to go

private:
// Private Member functions here

// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here