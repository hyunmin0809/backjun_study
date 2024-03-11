#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c, m, total = 0;
int car[105] = {};

int main()
{
    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++)
    {
        int start = 0, end = 0;
        cin >> start >> end;
        for (int j = start; j < end; j++)
        {
            car[j]++;
        }
        m = max(m, end);
    }

    for (int i = 1; i < m; i++)
    {
        if (car[i] == 1)
            total += a;
        else if (car[i] == 2)
            total += (b * 2);
        else if (car[i] == 3)
            total += (c * 3);
    }
    cout << total;

    return 0;
}