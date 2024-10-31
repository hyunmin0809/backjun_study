#include <iostream>
using namespace std;

int sol(int num){
    return (num)*(num+1)/20;
}

int main() {
    int n;
    cin >> n;
    cout << sol(n);
    return 0;
}