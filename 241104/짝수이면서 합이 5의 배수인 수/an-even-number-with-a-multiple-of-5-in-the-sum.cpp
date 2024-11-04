#include <iostream>
using namespace std;

bool isEvenSumMultipleOfFive(int n){
    int sum = 0;
    
    if(n % 2 == 0){
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        if(sum % 5 == 0){
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    if(isEvenSumMultipleOfFive(n)){
        cout << "Yes";
    }
    else cout << "No";

    return 0;
}