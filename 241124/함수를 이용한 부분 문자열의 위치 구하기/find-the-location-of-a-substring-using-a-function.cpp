#include <iostream>
#include <vector>

using namespace std;

string str1, str2;

bool isSubStr(int start_idx){
    int n = str1.size();
    int m = str2.size();

    if(start_idx + m - 1 >= n)
        return false;

    for(int j = 0; j < m; j++) {
        // 하나라도 다르다면, 부분 문자열이 아니므로 false를 반환합니다.
        if(str1[start_idx + j] != str2[j])
            return false;
    }

    // 전부 일치한다면 부분 문자열이므로 true를 반환합니다.
    return true;
}

int sol(){
    int n = str1.size();
    for(int i = 0; i < n; i++){
        if(isSubStr(i))
        return i;
    }
    return -1;
}

int main() {
    cin >> str1 >> str2;

    cout << sol();
    return 0;
}