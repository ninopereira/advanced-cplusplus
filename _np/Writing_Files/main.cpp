#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream outFile;
    const char* filename = "test.txt";
    outFile.open(filename, ios::out);

    if (outFile.is_open()){
        outFile << "The text is:" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else{
        cout << "Failed to open file: " << filename << endl;
    }

    return 0;
}
