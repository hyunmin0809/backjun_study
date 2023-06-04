#include <iostream>

using namespace std;

const int alpNUM = 26;

int main()
{
    string s;
    int num[alpNUM];
    fill_n(num, alpNUM, -1);
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int n = s[i] - 'a';
        if (num[n] == -1)
            num[n] = i;
    }

    for (int i = 0; i < alpNUM; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}