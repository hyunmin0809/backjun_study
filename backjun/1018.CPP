#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 50;
char board[MAX][MAX];

int repaintCount(int x, int y) {
    int whiteStart = 0;
    int blackStart = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                if (board[x + i][y + j] != 'W') whiteStart++;
                if (board[x + i][y + j] != 'B') blackStart++;
            } else {
                if (board[x + i][y + j] != 'B') whiteStart++;
                if (board[x + i][y + j] != 'W') blackStart++;
            }
        }
    }

    return min(whiteStart, blackStart);
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }

    int result = 64;

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            result = min(result, repaintCount(i, j));
        }
    }

    cout << result << endl;

    return 0;
}
