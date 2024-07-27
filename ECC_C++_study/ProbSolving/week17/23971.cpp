#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, N, M;
    cin >> H >> W >> N >> M;

    // 행과 열마다 필요한 간격을 유지하며 배치할 수 있는 사람의 수 계산
    int rows = (H + N) / (N + 1);
    int cols = (W + M) / (M + 1);

    // 결과는 행과 열의 가능한 좌석 수의 곱
    int result = rows * cols;
    cout << result << endl;

    return 0;
}
