#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;

    vector<int> vt; 

    while(N--){
        int temp;
        cin >> temp;
        vt.push_back(temp);
    }

    sort(vt.begin(), vt.end());

    cout << vt[K-1];

    return 0;
}