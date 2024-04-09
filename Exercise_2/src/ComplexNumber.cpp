#include "ComplexNumber.hpp"

namespace ComplexLibrary{

Complex coniugato(const Complex &c1)
{
    Complex c( c1.real, (-1)*c1.image);
    return c;
}

ostream& operator<<(ostream& os , const Complex& c)
{
    if (c.real >= 0)
        os << '(' << c.real << "+" << c.image << "i" << ')' << endl;
    else
        os << '(' << c.real << "-" << c.image << "i" << ')' << endl;
    return os;
}


Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex c(c1.real + c2.real, c1.image + c2.image);
    return c;
}

bool operator==(const Complex &c1, const Complex &c2)
{
    if (c1.real==c2.real && c1.image==c2.image)
        return true;
    else
        return false;
}

}
