#include <iostream>
#include <exception>
using namespace std;

// When dealing with subclasses we have to be careful about the order
// in which we handle the exceptions.
// The parent class may have a virtual class to handle the exception
// if we don't care about the order in which we handle them
// then the parent class may be called instead
// Change the boolean error to experiment

class PolimorficException
{
public:
    void GoesWrong()
    {
        if (error_general){
            throw(exception());
        }
        if (error_bad_alloc){
            throw(bad_alloc());
        }
    }
    bool error_general = true;
    bool error_bad_alloc = true;
};

int main()
{
    cout << "Hello world!" << endl;
    PolimorficException polimorfic_exception;
    polimorfic_exception.error_general = false;
    polimorfic_exception.error_bad_alloc = true;
    try{
        polimorfic_exception.GoesWrong();
    }
    // Note: try swapping the catch statements and see what happens
    catch(exception e)
    {
        cout << "This is a general exception: " << e.what() << endl;
    }
    catch(bad_alloc e)
    {
        cout << "This is a bad_alloc: " << e.what() << endl;
    }
    cout << "Still running!" << endl;
    return 0;
}
