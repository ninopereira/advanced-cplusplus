#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream inputFile;
    string fileName = "data.txt";
    inputFile.open(fileName, ios::in);
    if (inputFile.is_open()){
        string line;
        int population;
        while (inputFile){
            getline(inputFile, line, ':');
            inputFile >> population;
            //input.get();
            inputFile >> ws;
            if (!inputFile){
                break;
            }
            cout << line << "= " << population << endl;
        }

        inputFile.close();
    }
    else{
        cout << "Cannot open file: " << fileName << endl;
    }
    return 0;
}
