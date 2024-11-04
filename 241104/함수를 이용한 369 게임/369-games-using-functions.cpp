#include <iostream>
using namespace std;

bool isThree(int n){
    return n % 3 == 0;
}

bool doHaveThree(int n){ 
    while(n > 0){
        if((n%10)%3 == 0 &&  n%10 != 0){ 
            return true;
        }
        n /= 10;
    }
    return false;
}

bool isMagicNum(int n){
    return doHaveThree(n) || isThree(n);
}


int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(isMagicNum(i)){
            cnt++; 
        }
    }

    cout << cnt;

    return 0;
}