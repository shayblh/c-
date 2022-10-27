#include "vector.hh"
// constructors

Vector::Vector()
{
    for (int i = 0; i < NDIM; ++i) {
        this->m_data[i] = 0;
    }
}

Vector::Vector(std::initializer_list<value> l) {
    for (int i = 0; i < l.size(); ++i) {
        this->m_data[i] = l.begin()[i];
    }
}

value &Vector::operator[](size_t idx) {
    if (idx < NDIM)
    {
        return this->m_data[idx];
    }

    return this->m_data[0];
}


const value &Vector::operator[](size_t idx) const {
    if (idx < NDIM)
    {
        return this->m_data[idx];
    }

    return this->m_data[0];
}

Vector Vector::operator+(const Vector v){
    Vector res = (*this);
    return res += v;
}

Vector& Vector::operator+=(const Vector& rhs){
    for (int i = 0; i < NDIM; ++i) {
        (*this)[i] = (*this)[i] + rhs[i];
    }

    return *this;
}

Vector& Vector::operator+=(const value& k){
    for (int i = 0; i < NDIM; ++i) {
        (*this)[i] = (*this)[i] + k;
    }

    return *this;
}



Vector& Vector::operator-=(const Vector& v){
    for (int i = 0; i < NDIM; ++i) {
        (*this)[i] = (*this)[i] - v[i];
    }

    return *this;
}

Vector Vector::operator-(const Vector& v){
    Vector res = (*this);
    return res -= v;
}

Vector& Vector::operator*(const value& k){
    return (*this) *= k;
}

Vector& Vector::operator*=(const value& k){
    for (int i = 0; i < NDIM; ++i) {
        (*this)[i] = (*this)[i] * k;
    }
    return (*this);
}

value Vector::operator*(const Vector& v){
    value res = 0;
    for (int i = 0; i < NDIM; ++i) {
        res += (*this)[i] * v[i];
    }

    return res;
}


std::ostream& operator<<(std::ostream& os, const Vector& v){
    os << '{';
    for (int i = 0; i < NDIM; ++i) {
        os << v[i];
        if (i != NDIM - 1)
        {
            os << ',';
        }
    }

    os << "}";
    return os;
}