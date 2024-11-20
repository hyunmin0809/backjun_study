#include <iostream>
using namespace std;

void sol(int &a, int &b){
    if(a < b){a *= 2; b += 25;}
    else {b *= 2; a += 25;}
    return;
}

int main() {
    int a, b;
    cin >> a >> b;
    sol(a, b);

    cout << a << " " << b;


    return 0;
}