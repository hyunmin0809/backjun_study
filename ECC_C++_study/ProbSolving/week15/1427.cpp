#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string sorting(string n) {
    sort(n.begin(), n.end(), greater<char>());
    return n;
}

int main() {
    string n;
    cin >> n;
    cout << sorting(n) << "\n";
    return 0;
}