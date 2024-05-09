#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, k, temp, ans = -100000000;
    cin >> n >> k;
    vector<int> sum(100001);

    vector <int> vt(n);
    for(int i = 1; i <= n; i++) {
        cin >> temp; //입력 받아옴
        sum[i] = sum[i-1] + temp;
    }

    for(int i = k; i <= n; i++){
        ans = max(ans, sum[i]-sum[i-k]);
    }

    cout << ans;
    return 0;
}