//sort 문제이다. 
//주어지는 문자의 개수(N은 크지만 자릿수만 세면 적다.)가 적어서 버블 솔트를 연습할 겸 버블 솔트로 풀 예정
//그냥 sort 내림차순으로 해도 된다. 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solution(vector<int> &vt, string input){
    for(int i = 0; i < input.size(); i++){
        vt[i] = stoi(input.substr(i,1)); //input[i] 라고 하면 오류갸 생겨서 substr 해저야함. 
        // 왜 오류인지 고민해봤는데 아마 문자열이아니라 문자가 들어가서 그런것 같다 나중에 서치해서 블로그에 올려봐야할듯
    }

    for (int i = 0 ; i < input.size(); i++){
        int Max = i;
        for(int j = i + 1; j < input.size(); j++){
            if(vt[j] > vt[Max]){
                Max = j;
            }

            if(vt[i] < vt[Max]){
                int temp = vt[i];
                vt [i] = vt[Max];
                vt [Max] = temp;  
            }
        }
    }
    string ans = "";

    for(int i = 0; i < vt.size(); i++){
        cout << vt[i];
    }

    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;
    vector<int> vt(input.size(), 0);

    solution(vt, input);

    return 0;
}