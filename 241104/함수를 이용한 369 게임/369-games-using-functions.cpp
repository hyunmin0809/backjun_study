#include <iostream>
using namespace std;

bool isThree(int n){
    return n % 3 == 0;
}

bool isMagicNum(int n){
    return (n % 10)% 3 ==  0 || (n/10)%3 == 0 || isThree(n);
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