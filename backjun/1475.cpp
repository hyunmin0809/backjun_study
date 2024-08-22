#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string room_number;
    cin >> room_number;

    vector<int> count(10, 0);  

    for (char c : room_number) {
        count[c - '0']++;
    }

    int six_nine_count = count[6] + count[9];
    count[6] = (six_nine_count + 1) / 2; 
    count[9] = 0;  

    int max_sets = 0;
    for (int i = 0; i < 9; i++) {  
        max_sets = max(max_sets, count[i]);
    }

    cout << max_sets << "\n"; 

    return 0;
}