#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


namespace ComplexLibrary{

struct Complex
{
    double real;
    double image;

    Complex(double a, double b):
        real(a),
        image(b)
    {
        ;
    }

    Complex() = default;

};

Complex coniugato(const Complex &c1);
ostream& operator<<(ostream& os, const Complex &c);
Complex operator+(const Complex &c1, const Complex &c2);
bool operator==(const Complex &c1, const Complex &c2);
}
#endif
