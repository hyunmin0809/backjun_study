#include <iostream>

using namespace std;

int N;

int calSum(int n){
    if(n == 0) return 0;
    return calSum(n-1) + n;
}


int main() {
    cin >> N;

    cout << calSum(N);

    return 0;
}