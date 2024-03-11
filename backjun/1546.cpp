#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, max = 0;
    float total = 0;

    cin >> n;

    vector<int> sub[n];

    for (int i = 0; i < n; i++)
    {
        cin >> sub[i];
        if (max < sub[i])
        {
            max = sub[i];
        }
        total += sub[i];
    }

    cout << (total / max * 100) / n;

    return 0;
}