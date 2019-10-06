#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    // one way of iterating through vectors
    for (size_t i=0; i<strings.size(); i++)
    {
        cout << strings[i] << endl;
    }
    // second way of iterating through vectors
    for (vector<string>::iterator it = strings.begin(); it < strings.end(); it++)
    {
        cout << *it << endl;
    }
    // third way of iterating through vectors (in C++ 11)
    for (auto item: strings)
    {
        cout << item << endl;
    }
    return 0;
}
