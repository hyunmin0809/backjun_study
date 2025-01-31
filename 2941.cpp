#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    string croatian_letters[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    int count = word.length();
    for (const string& letter : croatian_letters) {
        size_t pos = 0;
        while ((pos = word.find(letter, pos)) != string::npos) {
            count--;
            pos += letter.length();
        }
    }
    
    cout << count;
    return 0;
}