#include <iostream>
using namespace std;

void coutStar(int num){
    if(num == 0)
        return;
    coutStar(num - 1);
    for(int i = 0; i < num; i++)
        cout << "*";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    coutStar(n);
    return 0;
}