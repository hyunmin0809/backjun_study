#include <iostream>

using namespace std;

int findFac(int n)
{
    if (n > 2)
        n = n * findFac(n - 1);
    return n;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    if (!n)
        cout << findFac(n);
    else
        cout << 1;
    return 0;
}