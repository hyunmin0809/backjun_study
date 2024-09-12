#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N, newRecord, P; //N: 현재 있는 랭킹 P: 랭킹 한도

    cin >> N >> newRecord >> P;

    vector<int> rankingList(P);

    for(int i = 0; i < N; ++i){
        cin >> rankingList[i];
    }

    if (N == 0) {
        cout << 1;
        return 0;
    }

    sort(rankingList.begin(), rankingList.end(), greater<int>());

      if (N == P && newRecord <= rankingList[N - 1]) {
        cout << -1;
        return 0;
    }


    auto it = lower_bound(rankingList.begin(), rankingList.end(), newRecord, greater<int>());
    //lower_bound -> 삽입할 위치를 찾는 함수

    cout << (it-rankingList.begin()) + 1; //0부터 시작

    

    return 0;
}