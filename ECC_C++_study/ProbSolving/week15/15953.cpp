#include <iostream>
using namespace std;

int festival1(int score) {
    if (score == 0) return 0;
    if (score == 1) return 5000000;
    if (score <= 3) return 3000000;
    if (score <= 6) return 2000000;
    if (score <= 10) return 500000;
    if (score <= 15) return 300000;
    if (score <= 21) return 100000;
    return 0;
}

int festival2(int score) {
    if (score == 0) return 0;
    if (score == 1) return 5120000;
    if (score <= 3) return 2560000;
    if (score <= 7) return 1280000;
    if (score <= 15) return 640000;
    if (score <= 31) return 320000;
    return 0;
}

int main() {
    int t;
    cin >> t; 

    for (int i = 0; i < t; ++i) {
        int first, second;
        cin >> first >> second; 
        int totalPrize = festival1(first) + festival2(second);
        cout << totalPrize << "\n"; 
    }

    return 0;
}