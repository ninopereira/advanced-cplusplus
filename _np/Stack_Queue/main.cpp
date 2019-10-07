#include <iostream>
#include <stack>
#include <queue>

using namespace std;
int main()
{
    cout << " ==== Testing stack (FILO) ====" << endl;
    {
        stack<string> users;
        users.push("Rob");
        users.push("Lucy");
        users.push("Gina");

        while (!users.empty())
        {
            string user = users.top();
            cout << "Top user = " << user << endl;
            users.pop();
        }
    }
    cout << endl << "==== Testing queue (FIFO) ====" << endl;
    {
        queue<string> users;
        users.push("Rob");
        users.push("Lucy");
        users.push("Gina");

        while (!users.empty())
        {
            string user = users.front();
            cout << "Front user = " << user << endl;
            users.pop();
        }
    }
    return 0;
}
