#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int td, wd, gd, cola, cider;

    cin >> td >> wd >> gd >> cola >> cider;

    cout << min(gd, min(td, wd)) + min(cola, cider) - 50;

    return 0;
}