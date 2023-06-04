#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] >= 'a' && b[i] <= 'z')
        {
            b[i] -= 32;
        }
    }

    if (a.compare(b) > 0)
    {
        return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n)
    {
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), cmp);

        cout << v[0] << "\n";
        cin >> n;
    }
    return 0;
}