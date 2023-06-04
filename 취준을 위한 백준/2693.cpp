#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int t;
    priority_queue<int> q;
    cin >> t;
    while (t--)
    {
        q = priority_queue<int>();
        for (int i = 0; i < 10; i++)
        {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        q.pop();
        q.pop();
        cout << q.top() << "\n";
    }
}