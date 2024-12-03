#include <iostream>
using namespace std;

void sol(int num){
    if (num == 0) return;
    for(int i = 0; i < num; i++){
        cout << "* ";
    }
    cout << "\n";
    sol(num-1);
     if (num == 0) return;
    for(int i = 0; i < num; i++){
        cout << "* ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    sol(n);
    return 0;
}