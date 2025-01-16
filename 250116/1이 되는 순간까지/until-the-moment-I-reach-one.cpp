#include <iostream>

using namespace std;

int N, cnt = 0;

int f(int n){
    if(n == 1){
        return cnt;
    }
    else if(n % 2 == 0){ //짝수
        cnt++;
        return f(n/2);
    }
    else {
        cnt++;
        return f(n/3);
    }
}

int main() {
    cin >> N;

    cout << f(N);

    return 0;
}