#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    vector<long> s(n,0);
    vector<long> c(n,0);

    long ans = 0;

    cin >> s[0];

    for(int i = 1; i < n ; i++){
        int temp = 0;
        cin >> temp;
        s[i] = s[i-1] + temp;
    }

    for(int i = 0; i < n; i++){
        int remain = s[i] % m;
        if( remain == 0){
            ans++;
        }
        c[remain]++;
    }

    for (int i = 0; i < m; i++){
        if(c[i] > 1){
            ans - ans + (c[i]*(c[i]-1)/2);
        }
    }
    cout << ans << "\n";
}