#include <iostream>

using namespace std;

int N;

int F(int n) {
    if (n==0) return 0;
    return F(n / 10) + (n % 10)*(n%10);
}

int main() {
    cin >> N;

    cout << F(N);
    return 0;
}