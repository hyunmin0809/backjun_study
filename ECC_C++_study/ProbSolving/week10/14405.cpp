#include <iostream>

using namespace std;

string solution (string s){
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == 'p' && s[++i] == 'i') continue;
        else if (s[i] == 'c' && s[++i] == 'h' && s[++i] == 'u') continue;
        else if (s[i] == 'k' && s[++i] == 'a') continue;
        else return "NO";
    }

    return "YES";
}

int main(){
    string s;
    cin >> s;

    cout << solution(s);

    return 0;
}