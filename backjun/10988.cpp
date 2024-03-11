#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int j = s.size() - 1;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[j--])
            cnt++;
    }

    if (cnt == s.size())
        cout << 1;
    else
        cout << 0;

    return 0;
}