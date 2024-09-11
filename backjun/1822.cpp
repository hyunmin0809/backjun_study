#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int nA, nB;
    cin >> nA >> nB;

    set<int> setA;
    set<int> setB;

    for (int i = 0; i < nA; ++i) {
        int element;
        cin >> element;
        setA.insert(element);
    }

    for (int i = 0; i < nB; ++i) {
        int element;
        cin >> element;
        setB.insert(element);
    }

    vector<int> result;
    for (int element : setA) {
        if (setB.find(element) == setB.end()) {
            result.push_back(element);
        }
    }

    cout << result.size() << endl;
    if (!result.empty()) {
        sort(result.begin(), result.end());
        for (int element : result) {
            cout << element << " ";
        }
        cout << "\n";
    }

    return 0;
}
