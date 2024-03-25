//해당 문제는 2020 카카오 블라인드 테스트의 문자열 압축이라는 알고리즘 문제이다.
//해당 링크 >> https://school.programmers.co.kr/learn/courses/30/lessons/60057

/*
1. for문 돌려서 1 부터 n/2 까지 나눠봄 처음부터 단위별로
2. str 차례차레 넣어서 확인 
3. str 입력된거랑 비교후 다르면 다음칸으로 넘어감. 
4. str 같은 게 생길때마다 TOTAL STR - NUM (끊는 단위) 해주고 ++ 해줌 
5. str 같은거 처음 생기면 +1 해줘야하는데 고민. VECTOR 맨 앞에 몇번 겹쳤는지 값을 둘 까 싶다. VECTOR값 갈아엎을때 맨 앞에 0 아니면 RESULT++ 해주게 
6. 어차피 중요한건 COUNT 값이지 결과 STRING은 아니라 따로 만들진 않을 예정. 

7. 라고 생각했는데....... 걍 그때그때 조건달고 하기가 힘들어서 걍 num 확정되면 해주는걸로
*/
/*

#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int getResult(string target, int unit_length){
    int pos = 0; //현재 위치
    string prev_str = ""; //이전에 끊어둔 문자열
    int num = 1; // 반복횟수 0으로 하면 안됨.
    int targetLength = target.length();
    int result = targetLength;

    while(pos + unit_length <= targetLength){ //여기서 자르고 확인 j가 현재 탐색중인 str 위치  

        string substr = target.substr(pos, unit_length);
        if(substr == prev_str){
            num++;
        }
        else{ //반복 아님
            if(num > 1) //반복한 게 있는 경우
            { 
                //숫자 길이 만큼 문자열 증가시킴
                result += to_string(num).length();
                // 반복 횟수만큼 문자열 빼기
                result -= (num-1)*unit_length;
            }

            prev_str = substr; //교체
            num = 1;
        }

        pos += unit_length;
    }   

    if(num > 1){
        //숫자 길이 만큼 문자열 증가시킴
        result += to_string(num).length();
        // 반복 횟수만큼 문자열 빼기
        result -= (num-1)*unit_length;
    }
    return result;
}

int solution(string s) {
    int answer = s.length(); //가장 짧은 값

    for(int i = 1; i <= s.length()/2 ; i++){ //i = 자르는 단위
      answer = min(answer, getResult(s, i));
    }


    return answer;
}

int main(){
    string s;
    cin >>s;

    cout << solution(s);
    return 0;
}

#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int getShortenedLength(string target, int unit_length){
    //기존 타겟의 길이 선언
    int length = target.length();
    //줄어든 길이 선언
    int shortLen = length;
    //전에 잘려진 문자열 선언
    string prevStr = "";
    //반복 횟수 선언 
    int count = 1;

    //부분 문자열 인덱스. 이걸로 while문 돌릴 것이다.
    //left 선언 //현재 위치
    int left = 0;
    //right 선언 //얘가 target.length 넘으면 아웃
    int right = unit_length;

    //while문 선언.
    while(right <= length){ //범위 주의
        //현재 자른 문자열 선언. 이때는 substr을 사용한다. (substr사용법. str.(시작idx,unit))
        string curStr = target.substr(left, unit_length);
        //만약 잘린 문자열 == 전에 잘려진 문자열
        if(prevStr == curStr){
            //반복횟수 +1
            count++;
        }
        else{
        //아니라면
            //만약 반복횟수 > 1
            if(count > 1){
                //압축된 길이 수정 문자열 단축해주고, 앞에 있는 반복횟수 숫자만큼 늘려주기
                shortLen -= (count-1)*unit_length;
                shortLen += to_string(count).length(); //중요
            }
            //이제 prev 문자열 교체
            prevStr = curStr;
            //반복횟수도 초기화
            count = 1;
        }
        //이제 left right 조정
        left += unit_length;
        right += unit_length;
    }
    //while문 나오고 남아있는는 압축 문자열 반영하기.
    if(count > 1){
        shortLen -= (count-1) * unit_length;
        shortLen += to_string(count).length();
    }
    return shortLen;
}

int solution(string given_str){
    //answer 선언. 
    int answer = given_str.length();

    //for문 돌린다. 단위 unit k = 1 부터 str의 반값까지
    for(int k = 1; k <= given_str.length()/2; k++){
        //answer 는 기존 값과 줄어든 값의 최솟값. 줄어든 값은 getShortenedLength 로 구한다.  
        answer = min(answer, getShortenedLength(given_str,k));
    }

    return answer;
}*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getShortenLength(string target, int unit_length){
    int length = target.size();
    int shortenLen = length;
    
    string prevStr = "";
    
    int cnt = 1;
    
    int left = 0;
    int right = unit_length;
    
    while(right <= length){
        string curStr = target.substr(left, unit_length);
        if(curStr == prevStr){
            cnt++;
        }
        else{
            if(cnt > 1){
                shortenLen += to_string(cnt).size();
                shortenLen -= (cnt-1)*unit_length;
            }
            cnt = 1;
            prevStr = curStr;
        }
        left += unit_length;
        right += unit_length;
    }
    
    if(cnt > 1){
        shortenLen += to_string(cnt).size();
        shortenLen -= (cnt-1)*unit_length;
    }
    
    return shortenLen;
}

int solution(string s) {
    int answer = s.length();
    
    for(int i = 1; i <= s.size()/2; i++){ //i는 unit
        answer = min(answer, getShortenLength(s,i));
    }
    return answer;
}
