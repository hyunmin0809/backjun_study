#include <iostream>

using namespace std;

const int INF = 9999;

int main()
{
    int A, B, N;

    cin >> A >> B >> N;

    int ans = INF; // 최대

    int price, cities;

    for (int i = 1; i <= N; i++)
    {
        cin >> price >> cities;
        bool start = 0, end = 0;
        int here;
        for (int j = 0; j < cities; j++)
        {
            cin >> here;
            if (here == A)
                start = 1;
            if (here == B && start)
            {
                end = 1;
            }
        }
        if (end)
            ans = min(ans, price);
    }
    cout << (ans == INF ? -1 : ans);

    return 0;
}