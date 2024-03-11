#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    string b;

    cin >> a >> b;

    int lengthA = a.length();
    int lengthB = b.length();

    int add = lengthB - lengthA;

    int m = 50;

    for (int i = 0; i < add + 1; i++)
    {
        int cnt = 0;
        for (int j = 0; j < lengthA; j++)
        {
            if (a[j] != b[i + j])
            {
                cnt++;
            }
        }
        m = min(cnt, m);
    }
    cout << m;

    return 0;
}