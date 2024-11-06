#include <iostream>
using namespace std;

bool IsOnjeonsu(int n) {
    if(n % 2 == 0)
        return false;
    if(n % 10 == 5)
        return false;
    if(n % 3 == 0 && n % 9 != 0)
        return false;
    return true;
}

int main() {
    int year;
    cin >> year;
    cout << IsOnjeonsu(year);
    return 0;
}