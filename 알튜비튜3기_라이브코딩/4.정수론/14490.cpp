#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    string s;
    cin >> s;

    int index = s.find(':'); //: 위치 찾기
    int a = stoi(s.substr(0, index));
    int b = stoi(s.substr(index + 1, s.length()));

    int n = gcd(a, b);

    cout << a / n << ":" << b / n;

    return 0;
}