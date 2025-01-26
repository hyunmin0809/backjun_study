#include <iostream>

using namespace std;

int CountNumber(int a) {
    if(a == 1)
        return 0;

    if(a % 2 == 0)
        return CountNumber(a / 2) + 1;
    else
        return CountNumber(3 * a + 1) + 1;
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    cout << CountNumber(n);

    return 0;
}