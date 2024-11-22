#include <iostream>
using namespace std;

void sol(int &a, int &b){
    if (a < b) {
        a += 10; b *= 2;
    } 
    else {
        a *= 2; b += 10;
    }
}


int main() {
    int a, b;

    cin >> a >> b;

    sol(a, b);

    cout << a << " " << b;

    return 0;
}