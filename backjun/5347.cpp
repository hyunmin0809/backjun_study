#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(int a, int b) {
    return (long long)a * b / gcd(a, b);
}

int main() {
    int n;
    cin >> n;  

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << "\n";
    }

    return 0;
}
