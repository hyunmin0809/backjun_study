#include <iostream>

using namespace std;

int dp[20];

int f(int n)
{
    if (n <= 1)
        return n;
    if (dp[n])
        return dp[n];
    return dp[n] = f(n - 1) + f(n - 2);
}

int main()
{
    int T;
    cin >> T;
    cout << f(T);

    return 0;
}