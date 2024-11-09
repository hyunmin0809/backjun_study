#include <iostream>
using namespace std;


bool isOnjunseo(int a){
    if(a % 2 == 0) return false;
    if(a % 10 == 5) return false;
    if(a % 3 == 0 && a % 9 != 0) return false;
    return true;
}

int sol(int a, int b){
    int cnt = 0;
    for( int i = a; i <= b; i++){
        if(isOnjunseo(i)){
            cnt++;
        }
    }
    return cnt;
}


int main() {
    int a, b;
    cin >> a >> b;

    cout << sol(a, b);

    return 0;
}