#include <iostream>
#include <Complex.h>
using namespace std;
using namespace complex_number;

int main()
{
    Complex c1(2,4);
    Complex c2(3,7);
    Complex c3(c1);
    Complex c4;

    c4 = c2;

    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;
    cout << c4 << endl;
    return 0;
}
