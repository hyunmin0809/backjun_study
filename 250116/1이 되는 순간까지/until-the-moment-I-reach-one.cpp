#include <iostream>

using namespace std;

int N, cnt = 0;

int f(int n){
    if(n == 1){
        return cnt;
    }
    else if(n % 2 == 0){ //짝수
        return n/2;
        cnt++;
    }
    else {
        return n/3;
        cnt++;
    }
}

int main() {
    cin >> N;

    cout >> f(N);

    return 0;
}