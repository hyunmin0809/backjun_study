#include <iostream>
using namespace std;

void PrintNLines(int a, int b){
    for(int i = 0; i < a; i++){
        for(int j = 0; j <b; j++){
            cout << "1";
        }
        cout << "\n";
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    PrintNLines(a, b);
    return 0;
}