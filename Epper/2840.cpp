#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//원형 연결 리스트를 활용하면 쉬울 거라고 생각했다. 
//그런데 STL 에서는 원형 연결 리스트를 제공하지않는다. 그래서 그냥 벡터 활용.
//원형 연결 리스트 구현은 따로 해볼 예정

int main () {
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int N, K;
    int it, prevIt = 0;
    char ch;

    cin >> N >> K;

    vector<char> alp(N, '?'); 

    while(K--){
        cin >> it >> ch;

        it += prevIt;

        it %= N; //한 바퀴 돌기 때문에 룰렛 문자 개수를 나눠준 나머지 값

        prevIt = it;

        it = (it == 0) ? N : it;
        it--; 

        if(alp[it] == '?'){ //비어있으5면
            alp[it] = ch; //해당 문자를 넣음
        }
        else { //안 비어있으면 저장된 값과 같은지 체크.
            if(alp[it] != ch){
                cout << "!";
                return 0;
            } //다르면 종료 같으면 넘김
        }

        //입력받은 알파벳이 중복인지 체크
        if(count(alp.begin(), alp.end(), ch) > 1){
            cout << "!";
            return 0;
        }

    }
    for(int i = it; i >= 0; i--){
        cout << alp[i];
    }

    for(int i = N-1; i > it; i--){
        cout << alp[i];
    }

    return 0;
}