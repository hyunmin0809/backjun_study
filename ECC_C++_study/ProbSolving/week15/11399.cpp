#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int N, total = 0;
    cin >> N;
    vector<int> vv(N);

    for(int i = 0; i < N; i++){
        cin >> vv[i];
    }

    sort(vv.begin(), vv.end());

    for(int i = 0; i < N-1; i++){
        for(int j = 0; j <= i; j++){
            total += vv[i];
        }
    }

    return 0;
}
