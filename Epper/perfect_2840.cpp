#include <iostream>
#include <vector>

using namespace std; 
typedef pair<int, char> ci;

string arrowStartWheel(int arrow_point, int n, vector<char> &wheel){
    string ans = "";
    int start = arrow_point;
    do{
        ans += wheel[arrow_point];
        arrow_point = (arrow_point + 1) % n;
    } while(arrow_point != start);
    return ans;
}

string solution(int n, vector<ci> &record){
    vector<char> wheel(n, '?'); //바퀴의 상태
    vector<bool> check(26, false); //알파벳 중복 체크

    int idx = 0; //화살표가 가리키는 인덱스
    for(int i = 0; i<record.size(); i++){ //size = k
        int rot = record[i].first; 
        char alpha = record[i].second;
        idx = (idx - rot % n + n) % n; 
        //n을 왜 더하는지? -> -가 나올 수있기 때문. 
        //그러면 마지막 %n은 뭐지? -> idx = n 꽉차게 나올 수 있기 때문. 
        if(wheel[idx] == alpha){
            continue;
        }
        if(wheel[idx] != '?' || check[alpha - 'A']){
            return "!";
        }

        wheel[idx] = alpha;
        check[alpha - 'A'] = true;
    }
    return arrowStartWheel(idx, n, wheel);
}

int main(){
    int n, k; //n: 바퀴의 칸 수, k : 바퀴 돌리는 횟수
    cin >> n >> k;
    vector<ci> record(k, {0, 0}); 
    //바퀴 회전 기록: K개의 record에 int랑 char {0,0}으로 초기화
    for(int i = 0; i < k; i++){
        cin >> record[i].first >> record[i].second; //이제 first: 몇 칸 지났는지, second: 무슨 알파벳 
    }
    cout << solution(n,record);
    return 0;
}