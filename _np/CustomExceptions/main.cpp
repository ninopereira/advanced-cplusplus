#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception{

public:
    const char* what() const _GLIBCXX_USE_NOEXCEPT{
        return "My exception was triggered";
    }

};

class Test{

public:
    void GoesWrong(){
        throw(MyException());
    }
};

int main()
{
    cout << "Hello world!" << endl;
    Test test;
    try{
        test.GoesWrong();
    }
    catch(MyException e){
        cout << e.what() << endl;

    }
    cout << "Still running" << endl;

    return 0;
}
