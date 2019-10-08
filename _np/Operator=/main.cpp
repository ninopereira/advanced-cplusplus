#include <iostream>

using namespace std;

class Test
{
private:
    string id;
    int number;
public:
    // default constructor
    Test():id(""),number(0){}

    // main constructor
    Test(string tId, int tNumber):id(tId),number(tNumber){}

    // copy constructor
    Test(Test& other)
    {
        cout << "Copy constructor running " << endl;
        id = other.id;
        number = other.number;
    }

    // Assigning operator
    const Test& operator=(const Test& other)
    {
        cout << "Assigning operator running " << endl;
        id = other.id;
        number = other.number;
        return *this;
    }

    friend ostream &operator<<(ostream& out, const Test& other)
    {
        return out << other.id << ": " << other.number << flush;
    }
};

int main()
{
    Test test1("Kim", 10);
    cout << test1 << endl;
    Test test2("Joe", 20);
    cout << test2 << endl;
    Test test3(test1);
    cout << test3 << endl;
    Test test4;
    test4 = test1;
    cout << test4 << endl;

    test1 = test3 = test2;

    cout << test1 << endl;
    cout << test2 << endl;
    cout << test3 << endl;
    return 0;
}
