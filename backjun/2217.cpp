#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> rope(N);
    //rope vector에 로프가 견디는 무게 받아오기

    for(int i = 0; i < N; i++){
        cin >> rope[i];
    }

    sort(rope.begin(), rope.end(), greater<int>());

    int maxWeight = 0;    
    //i 번째 로프까지 사용할때 들어올릴 수 있는 최대 중량. 하나하나 비교하고 maxWeight에 넣어주기

    for(int i = 0; i < N; i++){
        int curWeight = rope[i] * (i+1);
        if(curWeight > maxWeight){
            maxWeight = curWeight;
        }
    }

    cout << maxWeight;

    return 0;
}
