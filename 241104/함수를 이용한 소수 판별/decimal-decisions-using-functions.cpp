#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0) return false; 
    }
    return true;
}

int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(isPrime(i) &&  i != 1){
            sum += i;
        }
    }

    cout << sum;

    return 0;
}