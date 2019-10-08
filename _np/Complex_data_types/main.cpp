#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<string, vector<int> > scores;

    scores["Maria"].push_back(15);
    scores["Maria"].push_back(16);
    scores["Tom"].push_back(17);
    scores["Tom"].push_back(12);
    scores["Ed"].push_back(14);

    for (auto student: scores)
    {
        cout << student.first << "\t" << flush;
        for (auto score: student.second)
        {
            cout << score << "\t" << flush;
        }
        cout << endl;
    }

    return 0;
}
