#include <iostream>
using namespace std;


//소수 판별
bool isPrime(int num){
    for(int i = 2; i < num/2; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

//모든 자리수 합이 짞수인지 판별 
bool isEven(int num){
    int sum = 0;
    
    while(num != 0){
        sum += num % 10;
        num /= 10;
    }

    if(sum % 2 == 0) return true;
    return false;
}


//추합해서 정답
int sol(int a, int b){
    int cnt = 0;

    for(int i = a; i <=b; i++){
        if(isPrime(i) && isEven(i)) cnt++;
    }
    return cnt;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << sol(a,b);
    return 0;
}