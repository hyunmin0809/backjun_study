#include <iostream>

using namespace std;

int N;

int f(int n){
    if (n == 0) return 1;
    else if (n == 1) return 1;

    return n*f(n-1);
}


int main() {
    cin >> N;

    cout << f(N);

    return 0;
}