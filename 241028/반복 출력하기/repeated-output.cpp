#include <iostream>
using namespace std;

void PrintNLinese(int n){
    for (int i = 0 ; i < n; i++){
        cout << "12345^&*()_\n";
    }
}

int main() {
    int n;
    cin >> n;
    PrintNLinese(n);
    return 0;
}