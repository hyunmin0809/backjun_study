#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> fruits(N);
    for (int i = 0; i < N; i++) {
        cin >> fruits[i];
    }

    sort(fruits.begin(), fruits.end()); // 과일의 높이를 오름차순으로 정렬

    for (int i = 0; i < N; i++) {
        if (fruits[i] <= L) {
            L++; // 먹으면 길이가 1 증가
        } else {
            break; // 더 이상 먹을 수 없는 과일이 나올 경우 종료
        }
    }

    cout << L;

    return 0;
}
