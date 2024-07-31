#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> slices_needed(N);
    for (int i = 0; i < N; i++) {
        cin >> slices_needed[i];
    }

    vector<int> time_to_feed(N, 0);
    queue<pair<int, int>> q; // pair: <index, slices needed>
    int current_time = 0;

    for (int i = 0; i < N; i++) {
        q.push({i, slices_needed[i]});
    }

    while (!q.empty()) {
        current_time++;
        int idx = q.front().first;
        int slices = q.front().second;
        q.pop();
        
        slices--;
        if (slices == 0) {
            time_to_feed[idx] = current_time;
        } else {
            q.push({idx, slices});
        }
    }

    for (int i = 0; i < N; i++) {
        cout << time_to_feed[i] << " ";
    }

    return 0;
}