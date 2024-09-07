#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int reverseNumber(int num) {
    string str = to_string(num);
    reverse(str.begin(), str.end());
    return stoi(str);
}

int main() {
    int X, Y;
    cin >> X >> Y;

    int revX = reverseNumber(X);
    int revY = reverseNumber(Y);

    int result = reverseNumber(revX + revY);

    cout << result << "\n";

    return 0;
}
