/// Multimaps allow you have multiple identical keys
#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> people;
    people.insert(make_pair(1, "Rob"));
    people.insert(make_pair(2, "Sue"));
    people.insert(make_pair(3, "Rob"));
    people.insert(make_pair(4, "Tim"));
    people.insert(make_pair(3, "Nino"));

    for (multimap<int, string>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->first << ": " << it-> second << endl;
    }

    /// Use count to check how many values of a type are stored
    /// and using upper_bound to skip iterating through values having the same key
    for (auto it = people.begin(); it != people.end(); it = people.upper_bound(it->first))
    {
        int key = it->first;
        cout << "There are " << people.count(key) << " people with id = " << key << endl;
    }

    /// Using range to display items with same key

    // pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = people.equal_range(3);
    // using c++ 11 you can write only:
    auto its = people.equal_range(3);

    cout << "Displaying equal range items" << endl;
    for (auto it = its.first; it != its.second; it++)
    {
        cout << it->first << ": " << it-> second << endl;
    }
    return 0;
}
