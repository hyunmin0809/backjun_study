#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    int n;
    int dp[11] = {0};
    
    dp[0] = 1; 
    
    for (int i = 1; i <= 10; i++) {
        if (i >= 1) dp[i] += dp[i - 1];
        if (i >= 2) dp[i] += dp[i - 2];
        if (i >= 3) dp[i] += dp[i - 3];
    }
    
    while (T--) {
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}
