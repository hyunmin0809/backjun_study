#include <iostream>

using namespace std;

int main()
{
    int out, in, n = 0, max = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> out >> in;
        n = n + in - out;
        if (max < n)
        {
            max = n;
        }
    }

    cout << max;

    return 0;
}