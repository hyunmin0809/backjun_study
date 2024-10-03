#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    set<string> wordSet;  // 중복을 제거 set 
    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        wordSet.insert(word); 
    }
    
    vector<string> words(wordSet.begin(), wordSet.end());
    
    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        if (a.length() == b.length()) {
            return a < b;  // 사전순
        }
        return a.length() < b.length();  // 길이순으로 정렬
    });
    
    for (const string &word : words) {
        cout << word << endl;
    }
    
    return 0;
}