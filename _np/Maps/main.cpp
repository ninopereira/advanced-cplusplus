// Note: When inserting values into a map they will be automatically sorted by key
// It doesn't matter which method you use.
// the elements in a map always follow a specific order
#include <iostream>
#include <map>
using namespace std;
using MapIterator = map<string, int>::iterator;
using Map = map<string, int>;

template <class T, class U>
void PrintMap (map<T, U> &aMap)
{
    cout << "====  PRINT MAP  ====" << endl;
    for (typename map<T,U>::iterator it=aMap.begin(); it!=aMap.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
}

template <class T,class U>
typename map<T,U>::iterator FindName(map<T,U> &aMap, T key)
{
    cout << "====  FIND  ====" << endl;
    typename map<T,U>::iterator it = aMap.find(key);
    if (it!=aMap.end())
    {
        cout << "Found " << it->first << ": " << it->second << endl;
    }
    else
    {
        cout << key << " not found!" << endl;
    }
    return it;
}

int main()
{
    map<string, int> ages;
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    PrintMap<string, int>(ages);

    // other ways of inserting values in the map:
    ages.insert(pair<string, int>("Nino", 32));
    ages.insert(make_pair("Tina", 61));
    ages.emplace("Rob",77);

    PrintMap<string, int>(ages);

    // erasing entry from the map
    FindName<string,int>(ages,"Raj");
    ages.erase("Raj");
    cout << "Raj was erased!" << endl;
    FindName<string,int>(ages,"Raj");

    PrintMap<string, int>(ages);

    return 0;
}
