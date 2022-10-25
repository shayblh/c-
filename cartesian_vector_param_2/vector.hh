#pragma once

#include <ostream>
#include <memory>

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
    Vector(std::initializer_list<value> l);
    value &operator[](size_t idx);
    Vector operator+(Vector v);
    const value &operator[](size_t idx) const;
    Vector& operator+=(const Vector& rhs);
    Vector& operator+=(const value& k);
    Vector operator-(const Vector& v);
    Vector& operator-=(const Vector& v);
    Vector& operator*(const value& k);
    Vector& operator*=(const value& k);
    value operator*(const Vector& v);
    // More to go

private:
// Private Member functions here
// Member variables are ALWAYS private, and they go here
    value m_data[NDIM];
};

// Nonmember function operators go here
std::ostream& operator<<(std::ostream& os, const Vector& v);