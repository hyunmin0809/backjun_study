#include <iostream>
#define MOD 1000000000
using namespace std;

int n;
int dp[101][10];

void initDP() {
    for (int i = 1; i <= 9; i++)
        dp[1][i] = 1;
}

void calSolution() {
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][j + 1] % MOD;
            } else if (j == 9) {
                dp[i][j] = dp[i - 1][j - 1] % MOD;
            } else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
            }
        }
    }
}

int getSolution() {
    int total = 0;
    for (int i = 0; i <= 9; i++) {
        total = (total + dp[n][i]) % MOD;
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    initDP();
    calSolution();
    cout << getSolution();

    return 0;
}