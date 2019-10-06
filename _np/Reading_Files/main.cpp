#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Reading file" << endl;

    fstream inFile;
    string inFileName = "textFile.txt";
    inFile.open(inFileName, ios::in);

    if (inFile.is_open())
    {
        string line;
        while (inFile)
        {
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    }
    else{
        cout << "Cannot open file: " << inFileName;
    }
    return 0;
}
