#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numVec(n);

    for (int i = 0; i < n; i++) {
        cin >> numVec[i];
    }

    sort(numVec.begin(), numVec.end());

    int total = 0;

    for (int k = 0; k < n; k++) {
        int target = numVec[k];
        int start = 0;
        int end = n - 1;

        while (start < end) {
            if (start == k) {
                start++;
            } else if (end == k) {
                end--;
            } else {
                int sum = numVec[start] + numVec[end];
                if (sum == target) {
                    total++;
                    break;
                } else if (sum < target) {
                    start++;
                } else {
                    end--;
                }
            }
        }
    }

    cout << total << "\n";

    return 0;
}