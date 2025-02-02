#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[46] = {0, 1}; // n은 최대 45이므로 배열 크기를 46으로 설정
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << endl;
    return 0;
}
