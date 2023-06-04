#include <iostream>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long s, sum = 0;

    int num = 1, count = 0;

    cin >> s;

    while (sum <= s)
    {
        sum += num;
        count++;
        num++;
    }

    cout << count - 1;

    return 0;
}