#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool check[10001];
    fill_n(check, 10001, 1);
    int n, m, least, sum = 0;
    cin >> n >> m;
    check[1] = false;
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (check[i])
        {
            for (int j = i * 2; j <= m; j += i)
                check[j] = false;
        }
    }

    for (int i = n; i <= m; i++)
    {
        if (check[i])
        {
            if (!sum)
                least = i;
            sum += i;
        }
    }

    if (!sum)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << "\n"
             << least;
    }

    return 0;
}