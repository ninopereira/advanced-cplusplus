#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int rows = 3;
    const int columns = 4;
    const int default_value = 7;
    vector < vector<int> > grid(rows, vector<int>(columns, default_value));
    grid[1].push_back(3);
    for (row: grid)
    {
        for (elem: row)
        {
            cout << elem << '\t';
        }
        cout << endl;
    }
    return 0;
}
