#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double solution(vector<int>& pebbles, int totalPebbles, int K) {
    double probability = 0.0;

    for (int i = 0; i < pebbles.size(); ++i) {
        if (pebbles[i] >= K) {
            double p = 1.0;
            for (int j = 0; j < K; ++j) {
                p *= (double)(pebbles[i] - j) / (totalPebbles - j);
            }
            probability += p;
        }
    }
    return probability;
}

int main() {
    int M;
    cin >> M;

    vector<int> pebbles(M);
    int totalPebbles = 0;

    for (int i = 0; i < M; ++i) {
        cin >> pebbles[i];
        totalPebbles += pebbles[i];
    }

    int K;
    cin >> K;

    cout << fixed << setprecision(10) << solution(pebbles, totalPebbles, K);

    return 0;
}