#include <iostream>
using namespace std;

// 피보나치 수열을 이용하여 K번째 문자열의 A와 B 개수를 계산
int main() {
    int K;
    cin >> K;

    // 초기값: A = 1, B = 0
    int A = 1, B = 0;

    // 피보나치 수열을 계산하여 A와 B의 개수 갱신
    for (int i = 1; i <= K; ++i) {
        int newA = B;      // A는 이전의 B의 개수가 됨
        int newB = A + B;  // B는 이전의 A + B의 개수가 됨
        A = newA;
        B = newB;
    }

    // 결과 출력
    cout << A << " " << B << endl;

    return 0;
}