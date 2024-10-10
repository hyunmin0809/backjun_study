#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; // 후보의 수
    cin >> N;

    vector<int> votes(N); // 각 후보의 득표수를 저장하는 벡터
    for (int i = 0; i < N; i++) {
        cin >> votes[i]; // 각 후보의 득표수 입력
    }

    int dasomVotes = votes[0]; // 기호 1번(다솜)의 득표수
    votes.erase(votes.begin()); // 나머지 후보들의 득표수만 남김

    int bribes = 0; // 매수한 사람 수

    // 다솜의 득표수가 나머지 모든 후보들보다 커질 때까지 반복
    while (!votes.empty() && dasomVotes <= *max_element(votes.begin(), votes.end())) {
        // 가장 득표수가 많은 후보를 찾음
        int maxIndex = max_element(votes.begin(), votes.end()) - votes.begin();
        // 그 후보의 득표수에서 1명을 매수
        votes[maxIndex]--;
        dasomVotes++;
        bribes++; // 매수한 사람 수 증가
    }

    cout << bribes; // 매수한 사람의 최소 수 출력

    return 0;
}
