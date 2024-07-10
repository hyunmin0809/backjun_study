#include <iostream>
#include <stack>
#include <string>

using namespace std;

int solution(const string& str) {
    stack<char> s;
    int count = 0;
    
    for (char ch : str) {
        if (ch == '{') {
            s.push(ch);
        } else if (ch == '}') {
            if (s.empty()) {
                count++;
                s.push('{');
            }
            s.pop();
        }
    }
    
    count += s.size() / 2;
    
    return count;
}

int main() {
    string input;
    int caseNumber = 1;

    while (getline(cin, input)) {
        if (input == "-") break;
        cout << caseNumber << ". " << solution(input) << "\n";
        caseNumber++;
    }

    return 0;
}