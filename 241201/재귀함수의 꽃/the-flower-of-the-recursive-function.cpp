#include <iostream>
using namespace std;

void sol(int n){
    if(n == 0)
        return;

    cout << n << " ";
    sol(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    sol(n);
    return 0;
}