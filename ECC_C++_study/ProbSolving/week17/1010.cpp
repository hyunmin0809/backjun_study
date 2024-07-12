#include <iostream>
#include <vector>

using namespace std;

int combination(int n, int r) {
    // 이차원 벡터를 이용하여 값을 저장할 테이블 생성
    vector<vector<int>> dp(n + 1, vector<int>(r + 1, 0));

    // 기본 값 초기화
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= min(i, r); ++j) {
            if (j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    return dp[n][r];
}

int main(){
    int T;
    cin >> T;

    while(T--){
        int n, m;
        cin >> n >> m;
        cout << combination(m, n) << "\n";
    }

    return 0;
}
