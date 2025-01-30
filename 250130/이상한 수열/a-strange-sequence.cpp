#include <iostream>


using namespace std;

int f(int a) {
    if(a == 1)
        return 1;
    if(a == 2)
        return 2;

    return f(a / 3) + f(a - 1);
}

int main() {
    int n;
    cin >> n;

    cout << f(n);

    return 0;
}