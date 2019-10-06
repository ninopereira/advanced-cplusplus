// In this program we want to prepare a struct suitable for writing into a binary file
// Note that the name cannot be a string because string doesn't allocate space for the variable, it's just a pointer

#include <iostream>

using namespace std;

// Try using pack or not and see the difference in number of bytes
// Without it the compiler will round the number of bytes for efficiency
// But when writing to binary files we might not want that
#pragma pack(push,1)
struct Person{
    //string name; not suitable for writing and reading binary files
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main()
{
    cout << sizeof(Person) << endl;
    return 0;
}
