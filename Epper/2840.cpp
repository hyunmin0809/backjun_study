#include<iostream>
#include<vector>

using namespace std;

typedef pair<int, char> ci;

string coutWheel(vector<char> wheel, int idx, int n){
    string ans="";

    int curPos = idx;
    do{
        ans += wheel[curPos];
        ++curPos %= n;

    }while(curPos != idx);

    return ans;

}

string solution(vector<ci> &record, int n){
    vector<char> wheel (n, '?');
    vector<bool> alpha (26, false);

    int idx = 0;

    for(int i = 0; i < record.size(); i++){
        int rot = record[i].first;
        char ch = record[i].second;

        idx = (idx - rot % n + n) %n;
        if(ch == wheel[idx]){
            continue;
        }

        if(wheel[idx] != '?' || alpha[ch - 'A']){
            return "!";
        }

        wheel[idx] = ch;
        alpha[ch - 'A'] = true;
    }

    return coutWheel(wheel, idx, n);
}

int main(){ 
    int n, k;
    
    cin >>n >> k;
    vector<ci> record(k, {0,0});

    for(int i = 0; i < k; i++){
        cin >>record[i].first >> record[i].second;
    }

    cout << solution(record, n);


    return 0;
}


/*
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


#include<iostream>
#include<vector>

using namespace std;
typedef pair<int, char> ci; //순서대로 돌려진 횟수, alphabet

string arrowStartWheel(int n, int idx, vector<char> &wheel){
    //ans 선언
    string ans = "";
    //index 포인트 선언
    int curPoint = idx; 
    //반복문으로 처음 시작 index 될때까지 한바퀴 돌기
    do{
        ans += wheel[curPoint];
        ++curPoint %= n;
    }while (curPoint != idx);
    //ans 리턴
    return ans;
}


string solution(int n, vector<ci> &record){
    //바퀴의 현재 char을 저장한 벡터 선언
    vector<char> wheel(n, '?'); //주의 ""가 아니라 ''이다.
    
    //알파벳 중복 체크를 위한 벡터 선언
    vector<bool> check(26, false);

    //화살표가 가리키는 인덱스 선언
    int idx = 0; 

    //반복문을 돌림. 입력받은 만큼 .
    for (int i = 0; i < record.size(); i++){ //length가 아니라 size. vector은 사이즈다. 
        //처음 입력받은 돌려진 횟수 선언
        int rot = record[i].first;
        //그래서 나온 결과 알파벳 선언
        char alpha = record[i].second;
        //인덱스값 조정. (자신 현 위치에서 돌려진 횟수만큼)
        idx = (idx - rot % n + n) % n; 
        //만약 alpha가 이미 있고, 같다면
        if(wheel[idx] == alpha)
            //컨티뉴 문제 X
            continue;
        else if(wheel[idx] != '?' || check[alpha - 'A'])//만약 ?도 아니거나 alppha가 한 번 사용 됐다면?
            //!리턴 
            return "!"; 
        //위에 다 아니라면 바퀴에 alpha 넣어줌
        wheel[idx] = alpha;
        //알파벳 중복 체크하기 
        check[alpha - 'A'] = true;

    }
    //이제 출력해주는 거 선언
    return arrowStartWheel(n, idx, wheel);
}

int main(){
    int n, k;
    cin >> n >> k;

    vector<ci> record(k, {0, 0});
    for(int i = 0; i < k; i++){
        cin >> record[i].first >> record[i].second;
    }

    cout << solution(n, record);
    return 0;
}

#include<iostream>
#include<vector>

using namespace std;

typedef pair<int, char> ci;

string arrowStartWheel(int n, int idx, vector<char> &wheel){
    string ans = "";

    int currentPos = idx;

    do{
        ans += wheel[currentPos];
        ++currentPos %= n; 
    }while(currentPos != idx);

    return ans;
}

string solution(int n, vector<ci> &record){
    vector<char> wheel(n, '?');
    vector<bool> check(26, false);

    int idx = 0;

    for(int i = 0; i < record.size(); i++){ //recod.size() 주의
        int rot = record[i].first;
        char alpha = record[i].second;

        idx = (idx - rot % n + n) % n;

        if(wheel[idx] == alpha){
            continue;
        }
        else if (wheel[idx] != '?' || check[alpha - 'A']){
            return "!";
        }

        wheel[idx] = alpha;
        check[alpha - 'A'] = true;
    }

    return arrowStartWheel(n, idx, wheel);
}


int main(){
    int n, k;
    cin >> n >> k;

    vector<ci> record(k, {0, 0});

    for(int i = 0; i < k; i++){
        cin >> record[i].first >> record[i].second;
    }
    
    cout << solution(n,record);

    return 0;
}

#include<iostream>
#include<vector>

using namespace std;

typedef pair<int, char> ci;

string coutAns(int idx, int n, vector<char> &wheel){
    string answer = "";
    
    int i = idx; 
    
    do{
        answer += wheel[i];
        ++i %= n;
        
    }while(i != idx);
    
    return answer;
}

string solution(int n, vector<ci>& record){
    vector<char> wheel (n, '?');
    vector<bool> check (26, false);
    
    int idx = 0;
    
    for(int i = 0; i < record.size(); i++){
        int rot = record[i].first;
        char alpha = record[i].second;
        
        idx = (idx - rot % n + n) % n;
        
        if(wheel[idx] == alpha){
            continue;
        }
        
        if(wheel[idx] != '?' || check[alpha - 'A']){
            return "!";
        }
        
        wheel[idx] = alpha;
        check[alpha - 'A'] = true;
    }
    
    return coutAns(idx, n, wheel);
}

int main(){
    int n, k;
    
    cin >> n >> k;
    
    vector<ci> record(k, {0,0});
    
    for(int i = 0; i < k ; i++){
        cin >> record[i].first >> record[i].second;
    }
    
    cout << solution(n, record);
    
    
    return 0;
}
*/