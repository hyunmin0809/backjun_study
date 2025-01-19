#include <iostream>

using namespace std;

int N;

int f(int num){
    if(num == 1) return 1;
    if(num == 2) return 2;
    return num + f(num-2);
    

}


int main() {
    cin >> N;

    cout << f(N);

    return 0;
}