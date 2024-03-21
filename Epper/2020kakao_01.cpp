//해당 문제는 2020 카카오 블라인드 테스트의 문자열 압축이라는 알고리즘 문제이다.
//해당 링크 >> https://school.programmers.co.kr/learn/courses/30/lessons/60057


#include<iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getResult(string target, int unit_length){
    int pos = 0; //현재 위치
    string prev_str = ""; //이전에 끊어둔 문자열
    int num = 0; // 반복횟수
    int result = target.length();

    while(pos + unit_length <= target.length()){ //여기서 자르고 확인 j가 현재 탐색중인 str 위치  

        string substr = target.substr(pos, unit_length);
        if(substr == prev_str){
            num++;
        }
        else{ //반복 아님
            if(num > 0) //반복한 게 있는 경우
            { 
                //숫자 길이 만큼 문자열 증가시킴
                result += to_string(num).length();
                // 반복 횟수만큼 문자열 빼기
                result -= num*unit_length;
            }

            prev_str = substr; //교체
            num = 0;
        }

        pos += unit_length;
    }   

    if(num > 0){
        //숫자 길이 만큼 문자열 증가시킴
        result += to_string(num).length();
        // 반복 횟수만큼 문자열 빼기
        result -= num*unit_length;
    }
    return result;
}

int solution(string s) {
    int answer = s.length(); //가장 짧은 값

    for(int i = 1; i <= s.size()/2 ; i++){ //i = 자르는 단위
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