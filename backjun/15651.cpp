#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> seq;

void dfs(int depth) {
    if (depth == M) {
        for (int num : seq) { //seq의 각 요소 가져욤
            cout << num << " ";
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; ++i) {
        seq.push_back(i);  // 숫자를 추가
        dfs(depth + 1);    // 다음 깊이로 이동
        seq.pop_back();    // 마지막에 추가한 숫자를 제거
    }
}

int main() {
    cin >> N >> M;
    dfs(0);
    return 0;
}