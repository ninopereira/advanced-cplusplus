#include <iostream>

using namespace std;

class CanGoWrong{

private:

public:
    CanGoWrong(){
        char* pMemory = new char[999999999999999999999];
        delete[] pMemory;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    try{
        CanGoWrong wrong;
    }
    catch(bad_alloc &e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    cout << "Still running" << endl;
    return 0;
}
