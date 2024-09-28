#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<long long, int> cardCount; 
    long long number;

    for (int i = 0; i < N; i++) {
        cin >> number;
        cardCount[number]++;  
    }

    long long mostFrequent = 0;
    int maxCount = 0;

    for (auto &entry : cardCount) {
        if (entry.second > maxCount || (entry.second == maxCount && entry.first < mostFrequent)) {
            mostFrequent = entry.first;
            maxCount = entry.second;
        }
    }

    cout << mostFrequent;

    return 0;
}