#include<iostream>
#include<string>

using namespace std;

//팰린드롬이 맞는지 판별하는 함수 
bool isPalin(const string& s){
    int start = 0, end = s.size() - 1;
        while (start < end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
}

//가장 짧은 팰린드롬 길이를 출력
int solution(string& s){
  int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (isPalin(s.substr(i))) {
            return n + i;
        }
    }
    return 2 * n;
}

int main(){
    string s;
    cin >> s;
    cout << solution(s);
    return 0;
}
