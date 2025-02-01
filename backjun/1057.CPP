#include <iostream>
using namespace std;

int findRound(int kim, int lim) {
    int roundNum = 0;
    
    while (kim != lim) {
        kim = (kim + 1) / 2;
        lim = (lim + 1) / 2;
        roundNum++;
    }

    return roundNum;
}

int main() {
    int N, kim, lim;
    cin >> N >> kim >> lim;

    cout << findRound(kim, lim) << endl;
    
    return 0;
}
