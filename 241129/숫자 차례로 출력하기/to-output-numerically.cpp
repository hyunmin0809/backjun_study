#include <iostream>

using namespace std;

void PrintNumber1(int n) {
    if(n == 0)
        return;

    PrintNumber1(n - 1);
    cout << n << " ";
}

void PrintNumber2(int n) {
    if(n == 0)
        return;

    cout << n << " ";
    PrintNumber2(n - 1);
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    PrintNumber1(n);
    cout << endl;
    PrintNumber2(n);
    return 0;
}