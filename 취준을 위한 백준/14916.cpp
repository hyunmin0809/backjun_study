#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cost;
    cin >> cost;
    int five = cost / 5;
    if (cost % 5 == 0)
    {
        cout << five;
        return 0;
    }
    while (five >= 0)
    {
        int result = (cost - (five * 5)) % 2;
        int two = (cost - (five * 5)) / 2;
        if (result == 0)
        {
            cout << five + two;
            return 0;
        }
        five--;
    }
    cout << -1;
    return 0;
}