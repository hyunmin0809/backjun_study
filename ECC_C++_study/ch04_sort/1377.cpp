#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//요지는 버블 정렬에서 언제까지 가냐. 정렬할 게 없으면, 더이상 정렬 X
//그러면 오른쪽에서 왼쪽으로 가장 많이 이동한 애 기준임. sort로 정렬 후에
//결국 최종 절렬은 오른쪽에서 왼쪽가다가 멈추는 거니까...

typedef pair<int, int> ci;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<ci> V(N);

    for(int i = 0; i < N; i++){
        cin >> V[i].first;
        V[i].second = i;
    }

    sort(V.begin(), V.end());
    int Max = 0;

    for(int i = 0; i<N; i++){
        if(Max < V[i].second -i){
            Max = V[i].second - i;
        }
    }

    cout << Max + 1;
    return 0;
}