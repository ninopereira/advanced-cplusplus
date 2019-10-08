#include "Complex.h"

namespace complex_number{

Complex::Complex()
{

}

Complex::~Complex()
{
    //dtor
}

Complex::Complex(const Complex& other){
    real = other.real;
    im = other.im;
}

const Complex& Complex::operator=(const Complex& other){
    real = other.real;
    im = other.im;
    return *this;
}

ostream& operator<<(ostream& out, const Complex& other)
{
    return out << "(" << other.real << "," << other.im << ")";
}

}
