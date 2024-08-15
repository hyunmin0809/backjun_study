#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int K;  // 반 수
    cin >> K;

    for (int i = 1; i <= K; ++i) {
        int N;  // 학생 수
        cin >> N;

        vector<int> scores(N);

        for (int j = 0; j < N; ++j) {
            cin >> scores[j];
        }

        sort(scores.begin(), scores.end());

        int max_score = scores[N - 1];
        int min_score = scores[0];
        int largest_gap = 0;

        for (int j = 1; j < N; ++j) {
            largest_gap = max(largest_gap, scores[j] - scores[j - 1]);
        }

        cout << "Class " << i << endl;
        cout << "Max " << max_score << ", Min " << min_score << ", Largest gap " << largest_gap;
    }

    return 0;
}
