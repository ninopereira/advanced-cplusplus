#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

namespace complex_number{
class Complex
{
    public:
        Complex();
        Complex(double real, double im):real(real),im(im){};
        Complex(const Complex& other);
        const Complex& operator=(const Complex& other);
        friend ostream& operator<<(ostream& out, const Complex& other);
        virtual ~Complex();

    protected:

    private:
        double real;
        double im;
};
}
#endif // COMPLEX_H
