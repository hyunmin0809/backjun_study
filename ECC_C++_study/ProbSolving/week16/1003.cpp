#include <iostream>
using namespace std;

int count_0[41], count_1[41];

void solution() {
    count_0[0] = 1;
    count_1[0] = 0;
    count_0[1] = 0;
    count_1[1] = 1;
    for (int i = 2; i <= 40; ++i) {
        count_0[i] = count_0[i - 1] + count_0[i - 2];
        count_1[i] = count_1[i - 1] + count_1[i - 2];
    }
}

int main() {
    int T, N;
    cin >> T;
    solution();
    while (T--) {
        cin >> N;
        cout << count_0[N] << " " << count_1[N] << "\n";
    }
    return 0;
}
