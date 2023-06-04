#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    vector<bool> check(1001, 1);
    int N, num, cnt = 0;
    cin >> N;
    check[1] = false;
    for (int i = 2; i < 1001; i++)
    {
        for (int j = i * 2; j < 1001; j += i)
        {
            if (check[j])
                check[j] = false;
        }
    }

    while (N--)
    {
        cin >> num;
        if (check[num])
            cnt++;
    }
    cout << cnt;

    return 0;
}