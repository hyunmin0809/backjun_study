#include <iostream>
using namespace std;

void printPattern(int n) {
    int size = 4 * n - 3;  // 패턴의 크기
    char pattern[size][size];

    // 초기화
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            pattern[i][j] = ' ';
        }
    }

    // 패턴 그리기
    for (int layer = 0; layer < n; layer++) {
        int start = 2 * layer;
        int end = size - 2 * layer - 1;

        // 상하 테두리
        for (int i = start; i <= end; i++) {
            pattern[start][i] = '*';
            pattern[end][i] = '*';
        }

        // 좌우 테두리
        for (int i = start; i <= end; i++) {
            pattern[i][start] = '*';
            pattern[i][end] = '*';
        }
    }

    // 패턴 출력
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << pattern[i][j];
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    printPattern(n);

    return 0;
}
