#include <iostream>
#include <list>
using namespace std;

template <class T>
void PrintList(list<T> &aList)
{
    cout << "========" << endl;
    for (typename list<T>::iterator it = aList.begin(); it != aList.end(); it++)
    {
        cout << *it << endl;
    }
}
int main()
{
    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    PrintList<int>(numbers);

    // insert a value
    list<int>::iterator it = numbers.begin();
    ++it;
    numbers.insert(it, 99);
    PrintList<int>(numbers);

    // erase a value from the list
    list<int>::iterator itErase = numbers.begin();
    ++itErase;
    ++itErase;
    numbers.erase(itErase);
    PrintList<int>(numbers);
    return 0;
}
