#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    
    // 이진수 덧셈
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result += (sum % 2) + '0';
        carry = sum / 2;
    }
    
    // 결과를 뒤집기
    reverse(result.begin(), result.end());

    // 불필요한 앞쪽의 '0' 제거
    int pos = result.find_first_not_of('0');
    if (pos != string::npos) {
        return result.substr(pos);
    } else {
        return "0";  // 모든 문자가 '0'일 경우
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        cout << addBinary(a, b) << endl;
    }
    return 0;
}
