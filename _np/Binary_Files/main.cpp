#include <iostream>
#include <fstream>
using namespace std;

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
    Person someone = {"Nino", 43, 75};
    string fileName = "test.bin";
    fstream binFile;

    binFile.open(fileName, ios::out|ios::binary);

    // Write to binary file
    if (binFile.is_open()){
        binFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        binFile.close();
    }
    else{
        cout << "Could not open file " << fileName;
    }

    // Read from binary file
    Person someoneElse = {};
    binFile.open(fileName, ios::in|ios::binary);
    if (binFile.is_open()){
        binFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        binFile.close();
    }
    else{
        cout << "Could not open file " << fileName;
    }

    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.weight << endl;
    return 0;
}
