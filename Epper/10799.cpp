
//1. ()가 나오기 전까지 ((( -> 개수만큼 막대가 있따. () 제외한 ) 나오면 개수빼기. 그리고 개수 새로 생기면 거기서 또 +1해줌. 
//예시. 총 개수 3(N개)이구나. +3(N) () 나오니까 +3(N) +3(N) 
//) 나왔으니까 하나 뺌. 이제 2개(N). 
//( 또 나옴. 그러면 이제 3개(N) 전체에 +1 해줌. 
//() 나옴 이제 +3 )) 
//) 빠짐 그럼 N = 2. 이제 또 () 나옴 그러면 +2(N) 그릭고 )개수만큼 또 N-- 그러면 N = 0
// 1 하나. 그러면 n++ n = 1, +1 거기서 () 그러면 +1
//정리 입력 받음 () 일때 +N
// ()가 아닐때 
    // (이면 total++, N++
    // )이면 N--

#include<iostream>
#include<stack>

using namespace std;

int solution(string input){
    stack<char> st; 
    int answer = 0;

    for(int i = 0; i < input.size(); i++){
        if(input[i] == '('){
            st.push('(');
        }
        else{
            st.pop();
            if(input[i-1] == '('){
                answer += st.size();
            }
            else
                answer++;
        }
    }
    return answer;
}

int main(){
    string input;

    cin >> input;

    cout << solution(input);

    return 0;
}










/*
#include <iostream>
#include <string>

using namespace std;

int calculateCount(string str){
    int total = 0;
    int currentNum = 0; //현재 막대 개수

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            if(str[i+1] == ')') //레이저
            {
                total += currentNum;
                i++;
            }
            else//막대 추가
            {
                total++;
                currentNum++;
            }
        }
        else if(str[i] == ')'){// 막대가 끝날때
            currentNum--;
        }
    }

    return total;
}

int solution(string str){
    int total = calculateCount(str); //결과 막대 개수    
    return total;
}

int main(){
    string input;
    cin >> input;

    cout << solution(input);
    return 0;
}

#include<iostream>
#include<stack>

using namespace std;

int solution(const string str){
    //스택 선언 
    stack<char> st;
    //answer 선언
    int answer = 0;
    
    //포문 돌림. str 받은거 하나하나 넣어서 확인용
    for(int i = 0; i < str.length(); i++){
        //만약 str[i] 가 여는 괄호인 경우
        if(str[i] == '('){
            st.push('(');
        }
            //스택에 ( 넣어줌
        //닫힌 괄호인 경우
        else{ 
            //st.pop() 해줌
            st.pop();
            //이전 문자가 (라면 (레이저란 소리)
            if(str[i-1] == '('){
                //ans에 스택 사이즈만큼 추가해준다. 
                answer += st.size();
            }
            else
            //만약 이전 문자가 )라면 막데리 끝
                answer++;
                //그냥 쇠막대기 ++ 해준다. 
        }
    }
    //answer  리턴
    return answer;
}

int main(){
    string str;
    cin >> str;

    int answer = solution(str);
    cout << answer;

    return 0;
}


#include <iostream>
#include <stack>

using namespace std;

int solution(string input){
    int answer = 0;
    stack<char> st;
    
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '('){
            st.push('(');
        }
        else{
            st.pop();
            if(input[i-1] == '('){
                //레이저란 소리
                answer += st.size();
            }
            else{
                answer++;
            }
        }
    }
    return answer;
}

int main(){
    string str;
    cin >> str;
    
    int answer = solution(str);
    cout << answer;
    
    return 0;
}
*/