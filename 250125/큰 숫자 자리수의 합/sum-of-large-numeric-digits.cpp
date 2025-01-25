#include <iostream>

using namespace std;

// n의 각 자릿수의 합을 반환합니다.
int DigitSum(int n) {
    if(n < 10)
        return n;

    return DigitSum(n / 10) + n % 10;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << DigitSum(a * b * c);

    return 0;
}
