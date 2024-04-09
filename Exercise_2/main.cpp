#include "src/ComplexNumber.hpp"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    std::string s = "";
    ComplexLibrary::Complex c;
    cout << "default for int: " << c << endl;

    ComplexLibrary::Complex c1(1.0, 1.0);
    cout << "c1: " << c1 << endl;

    ComplexLibrary::Complex c2(1.0, -2.0);
    cout << "c2: " << c2 << endl;

    ComplexLibrary::Complex sum = c1 + c2;
    cout << "sum of c1 + c2: " << sum << endl;

    ComplexLibrary::Complex c3(0.0,0.0);
    c3=ComplexLibrary::coniugato(c1);

    cout << "coniugato di c1= " << c3 << endl;

    if (c1==c2)
        cout << "c1 e' uguale a c2" << endl;
    else
        cout << "c1 e' diverso da c2" << endl;

    return 0;
}
