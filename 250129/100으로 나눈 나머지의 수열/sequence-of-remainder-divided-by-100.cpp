#include <iostream>

using namespace std;

// a번째 수열 값을 반환합니다.
int Sequence(int a) {
    if(a == 1)
        return 2;
    if(a == 2)
        return 4;

    return (Sequence(a - 1) * Sequence(a - 2)) % 100;
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    cout << Sequence(n);

    return 0;
}