#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 26, b = 5;

    cout << to_string(a) + " * " + to_string(b) + " = " + to_string(a*b);
    return 0;
}