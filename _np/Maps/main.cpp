#include <iostream>
#include <map>
using namespace std;

template <class T,class U>
void FindName(map<T,U> aMap, T key)
{
    cout << "========" << endl;
    typename map<T,U>::iterator it = aMap.find(key);
    if (it!=aMap.end())
    {
        cout << "Found " << it->first << ": " << it->second << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}

int main()
{
    map<string, int> ages;
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    for (map<string,int>::iterator it=ages.begin(); it!=ages.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // This is the right way of finding a value in the map

    FindName<string,int>(ages,"Raj");
    ages.erase("Raj");
    FindName<string,int>(ages,"Raj");
    return 0;
}
