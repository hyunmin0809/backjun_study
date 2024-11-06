#include <iostream>
using namespace std;

string IsOnjeonsu(int n) {
    if(n % 100 == 0 && n % 400 != 0)
        return "false";
    if(n % 4 == 0)
        return "true";
    return "false";
}

int main() {
    int year;
    cin >> year;
    cout << IsOnjeonsu(year);
    return 0;
}