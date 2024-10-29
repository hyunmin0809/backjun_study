#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c =7;
    int temp1, temp2;
    temp1 = b;
    b = a;
    temp2 = c;
    c = temp1;
    a = temp2;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}