#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, R;
    cin >> N >> R;

    ::unordered_set<int> returned;
    for (int i = 0; i < R; ++i) {
        int id;
        cin >> id;
        returned.insert(id);
    }

    vector<int> missing;
    for (int i = 1; i <= N; ++i) {
        if (returned.find(i) == returned.end()) {
            missing.push_back(i);
        }
    }

    if (missing.empty()) {
        cout << "*";
    } else {
        for (size_t i = 0; i < missing.size(); ++i) {
            if (i > 0) {
                cout << " ";
            }
            cout << missing[i];
        }
    }

    cout << "\n";
    return 0;
}