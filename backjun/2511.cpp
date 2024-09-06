#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A(10), B(10);
    
    for (int i = 0; i < 10; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < 10; ++i) {
        cin >> B[i];
    }
    
    int scoreA = 0, scoreB = 0;
    char lastWinner = 'D'; 

    for (int i = 0; i < 10; ++i) {
        if (A[i] > B[i]) {
            scoreA += 3;
            lastWinner = 'A';
        } else if (A[i] < B[i]) {
            scoreB += 3;
            lastWinner = 'B';
        } else {
            scoreA += 1;
            scoreB += 1;
        }
    }
    
    cout << scoreA << " " << scoreB << "\n";
    
    if (scoreA > scoreB) {
        cout << "A" << "\n";
    } else if (scoreB > scoreA) {
        cout << "B" << "\n";
    } else {
        if (lastWinner == 'D') {
            cout << "D" << "\n";
        } else {
            cout << lastWinner << "\n";
        }
    }
    
    return 0;
}
