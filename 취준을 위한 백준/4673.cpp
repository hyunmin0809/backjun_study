#include <iostream>
#include <vector>

using namespace std;

const int MAX = 10001;

int findNum(int n)
{
    int result = n;
    while (n > 0)
    {
        result += n % 10;
        n /= 10;
    }
    return result;
}

int main()
{
    vector<bool> check(MAX, false);

    int num;
    for (int i = 0; i < MAX; i++)
    {
        num = findNum(i);
        if (num < MAX)
        {
            check[num] = true;
        }
    }

    for (int i = 0; i < MAX; i++)
    {
        if (!check[num])
            cout << i << '\n';
    }

    return 0;
}