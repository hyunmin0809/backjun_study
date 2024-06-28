#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int strokes[26] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

vector<int> mergeNames(const string &A, const string &B) {
    vector<int> merged;
    int n = A.size(), m = B.size();
    int i = 0, j = 0;
    while (i < n || j < m) {
        if (i < n) merged.push_back(strokes[A[i++] - 'A']);
        if (j < m) merged.push_back(strokes[B[j++] - 'A']);
    }
    return merged;
}

int calculateCompatibility(vector<int> &arr) {
    while (arr.size() > 2) {
        vector<int> nextArr;
        for (size_t i = 0; i < arr.size() - 1; ++i) {
            int sum = arr[i] + arr[i + 1];
            nextArr.push_back(sum % 10); // 일의 자리만 남기기
        }
        arr = nextArr;
    }
    return arr[0] * 10 + arr[1];
}

int main() {
    int N, M;
    string A, B;

    cin >> N >> M;
    cin >> A >> B;

    vector<int> merged = mergeNames(A, B);

    int compatibility = calculateCompatibility(merged);

    if (compatibility < 10)
        cout << compatibility << "%\n";
    else
        cout << compatibility << "%\n";

    return 0;
}