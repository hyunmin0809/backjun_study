#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int original = N;
    int cycle_length = 0;

    do {
        int tens = N / 10;
        int ones = N % 10;
        int sum = tens + ones;
        N = (ones * 10) + (sum % 10);
        cycle_length++;
    } while (N != original);

    cout << cycle_length << endl;
    return 0;
}