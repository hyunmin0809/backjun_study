#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n;

    priority_queue<int> max_heap;

    while (n--)
    {
        cin >> x;
        if (x == 0)
        {
            if (max_heap.empty())
            {
                cout << "0\n";
            }
            else
            {

                cout << max_heap.top() << "\n";
                max_heap.pop();
            }
        }
        else
        {
            max_heap.push(x);
        }
    }

    return 0;
}