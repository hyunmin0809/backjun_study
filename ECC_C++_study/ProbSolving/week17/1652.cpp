#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> room(N);

    for (int i = 0; i < N; ++i) {
        cin >> room[i];
    }

    int horizontal = 0, vertical = 0;

    // Count horizontal spaces
    for (int i = 0; i < N; ++i) {
        int count = 0;
        for (int j = 0; j < N; ++j) {
            if (room[i][j] == '.') {
                count++;
            } else {
                if (count >= 2) horizontal++;
                count = 0;
            }
        }
        if (count >= 2) horizontal++;
    }

    // Count vertical spaces
    for (int j = 0; j < N; ++j) {
        int count = 0;
        for (int i = 0; i < N; ++i) {
            if (room[i][j] == '.') {
                count++;
            } else {
                if (count >= 2) vertical++;
                count = 0;
            }
        }
        if (count >= 2) vertical++;
    }

    cout << horizontal << " " << vertical;

    return 0;
}