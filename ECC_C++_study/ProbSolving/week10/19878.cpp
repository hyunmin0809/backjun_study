#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int N;
    cin >> N;

    vector<int> count(10001, 0); // 수의 범위가 10,000 이하이므로 10,001 크기의 벡터를 사용

    int num;
    for(int i = 0; i < N; i++){
        cin >> num;
        count[num]++;
    }

    for(int i = 1; i <= 10000; i++){
        while(count[i] > 0){
            cout << i << "\n";
            count[i]--;
        }
    }

    return 0;
}