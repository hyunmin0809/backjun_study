#include<iostream>
#include<vector>

using namespace std;

vector<int> calCount(string str){
	vector<int> alpha(26,0);
	for(int i = 0; i<str.size(); i++){
		alpha[str[i] - 'A']++;
	}
	return alpha;
}

string calPal(vector<int> &alpha){
	string str1 = "", str2 = "", str3 = "";

	for(int i = 0; i < 26; i++){
		if(alpha[i] % 2 == 1){
			if(str2.size() == 1){
				return"I'm Sorry Hansoo";
			}
			str2 = (char)(i + 'A');
		}

		for(int j = 0; j < alpha[i]/2; j++){
			str1 += (char)(i + 'A');
			str3 = (char)(i + 'A') + str3;
		}
	}
	return str1 + str2 + str3;
}

string solution(string str){
	vector<int> count = calCount(str);
	return calPal(count);
}

int main(){
	string str;
	cin >> str;
	
	cout << solution(str);
	return 0;
}

/*
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define SIZE 26

vector<int> countAlphabet(string str) {
	vector<int> count(SIZE, 0); 
	for (int i = 0; i < str.size(); i++) {
		count[str[i] - 'A']++;
	}
	return count;
}


string makePal(vector<int>& count) {
	string part1 = "", part2 = "", part3 = "";

	for (int i = 0; i < SIZE; i++) {
		if (count[i] % 2 == 1) {
			if (part2.size() == 1) {
				return "I'm Sorry Hansoo";
			}
			part2 = (char)(i + 'A');
		}
		for (int j = 0; j < count[i] / 2; j++) {
			part1 += (char)(i + 'A');
			part3 = (char)(i + 'A') + part3;
		}
	}

	return part1 + part2 + part3;
}
string solution(string str){
    
	vector<int> count = countAlphabet(str);
    return makePal(count);
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);


    string input; 
    cin >> input;

    cout << solution(input);

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int SIZE = 26;    // 알파벳의 수

vector<int> countAlphabet(string text){
	//카운트 벡터 선언. 26개만큼 있음
	vector<int> count(SIZE, 0);
	//for문 돌려서 string text의 크기만큼 돌려줌
	for(int i = 0; i < text.size(); i++){
		//그 카운트에 해당 알파벳이 얼마 들어갔는지 ++ 해준다. 
		count[text[i]-'A']++;
	}
	//카운트 리턴
	return count;
}

string makePalindrome(vector<int>& count){
	//스티링 파트1 파트2 파트3 선언 전부 공백 
	string part1 = "", part2 = "", part3 = "";

	//포문 알파벳을 살피기 위한 것 SIZE만큼 돌림
	for(int i = 0; i <SIZE; i++){
		//만약 알파벳 수가 홀수
		if(count[i] % 2 == 1){
			//그런데 가운데 part2가 찼자면 
			if(part2.size() == 1){
				//I'm Sorry Hanssoo 리턴
				return "I'm Sorry Hansoo";
			}
			//이제 가운데 비어있으므로 part에 할당해주기
			part2 = (char)(i + 'A');
		} 

		//남은수의 절반을 나누어 part1 part3 채울 예정. 포문을 돌린다. 이때는 count[i] /2만큼 
		for(int j = 0; j < count[i] / 2; j++){
			//파트 1에 넣아주기
			part1 += (char)(i + 'A');
			//파트 3에 넣어주기;
			part3 = (char)(i + 'A') + part3;
		}
	}
	//값 리턴
	return part1 + part2 + part3;
}

string solution(string str){
	//count 벡터 선언 후 countAlphabet 함수 선언. text에 있는 알파벳 개수 세어서 리턴해줌
	vector<int> count = countAlphabet(str);
	//makePalindrome(count) 리턴.
	return makePalindrome(count);
}

int main() {
	string input;
	cin >> input;

	cout << solution(input);

	return 0;
}


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

const int SIZE = 26;

vector<int> calCount(string input){
    vector<int> alpha(SIZE, 0);
    for(int i = 0; i < input.size(); i++){
        alpha[input[i] - 'A']++;
    }   
    
    return alpha;
}

string calPal(vector<int> &alpha){
    string str1 = "", str2 = "", str3 = "";
    for(int i = 0; i < SIZE; i++){
        if(alpha[i] % 2 == 1){
            if(str2.size() == 1){
                return "I'm Sorry Hansoo";
            }
            str2 = (char)(i+'A');
        }
        for(int j = 0; j < alpha[i] /2; j++){
            str1 += (char)(i+'A');
            str3 = (char)(i+'A') + str3;
        }
    }
    return str1 + str2 + str3;
}

string solution(string input){
    vector<int> alpha(SIZE, 0);
    
    alpha = calCount(input);
    
    return calPal(alpha);
}

    
    
int main(){
    string input;
    cin >> input;
    
    cout << solution(input);
    
    return 0;
}
*/