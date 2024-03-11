#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string N;
    int B, total = 0;

    cin >> N >> B;

    for (int i = 0; i < N.length(); i++)
    {
        int tmp = N[N.length() - (i + 1)];
        if (tmp <= '9' && tmp >= '0')
        {
            tmp = tmp - '0';
        }
        else
            tmp = tmp - 'A' + 10;
        total += (tmp * (int)pow(B, i));
    }
    cout << total;

    return 0;
}