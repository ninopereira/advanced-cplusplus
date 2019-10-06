#include <iostream>
#include <vector>
using namespace std;

template <class T>
void VectorInfo (vector<T> const &vec)
{
    cout << "Size = " << vec.size() << endl;
    cout << "Capacity = " << vec.capacity() << endl;
}

int main()
{
    vector<int> numbers(5,1);
    size_t capacity = numbers.capacity();
    for (int i=0; i<100; i++)
    {
        numbers.push_back(i);
        if (capacity != numbers.capacity())
        {
            capacity = numbers.capacity();
            cout << "New capacity = " << capacity << endl;
        }
    }
    VectorInfo(numbers);
    numbers.resize(300);
    VectorInfo(numbers);
    // Note that reserve does not change the size
    numbers.reserve(500);
    VectorInfo(numbers);
    numbers.clear();
    VectorInfo(numbers);
    return 0;
}
