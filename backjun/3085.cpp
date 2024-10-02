#include <iostream>
#include <algorithm>
using namespace std;

int N;
char board[50][50];

int checkMaxCandy() {
    int maxCount = 1;

    for (int i = 0; i < N; i++) {
        int rowCount = 1;
        for (int j = 1; j < N; j++) {
            if (board[i][j] == board[i][j - 1]) {
                rowCount++;
            } else {
                rowCount = 1;
            }
            maxCount = max(maxCount, rowCount);
        }
    }

    for (int j = 0; j < N; j++) {
        int colCount = 1;
        for (int i = 1; i < N; i++) {
            if (board[i][j] == board[i - 1][j]) {
                colCount++;
            } else {
                colCount = 1;
            }
            maxCount = max(maxCount, colCount);
        }
    }

    return maxCount;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    int result = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j + 1 < N) {
                swap(board[i][j], board[i][j + 1]);
                result = max(result, checkMaxCandy());
                swap(board[i][j], board[i][j + 1]); 
            }

            if (i + 1 < N) {
                swap(board[i][j], board[i + 1][j]);
                result = max(result, checkMaxCandy());
                swap(board[i][j], board[i + 1][j]);
            }
        }
    }

    cout << result << endl;
    return 0;
}