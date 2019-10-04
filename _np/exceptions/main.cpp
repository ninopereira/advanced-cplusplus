#include <iostream>

using namespace std;

void mightGoWrong()
{
    bool error1 = false;
    bool error2 = true;

    if(error1){
        throw "Something went wrong";
    }
    if(error2){
        throw string("A string error");
    }

}
int main()
{
    cout << "Hello world!" << endl;
    try{
        mightGoWrong();
    }
    catch(int e)
    {
        cout << "Error code: " << e << endl;
    }
    catch (const char* e)
    {
        cout << "Error string: " << e << endl;
    }
    catch (string &e)
    {
        cout << "String error: " << e << endl;
    }

    return 0;
}
