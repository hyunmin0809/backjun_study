#include <iostream>

using namespace std;

int main() {


    int n;
    cin >> n;
    const int MOD = 10007;

    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }

    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }

    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % MOD;
    }

    cout << dp[n];
    return 0;
}