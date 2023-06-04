#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m, total = 0;
    map<string, int> list;

    cin >> n >> m;

    while (n--)
    {
        string name;
        cin >> name;
        list[name]++;
    }
    while (m--)
    {
        string name;
        cin >> name;
        if (list[name]++)
        {
            total++;
        }
    }

    cout << total << '\n';
    for (auto i : list)
    {
        if (i.second == 2)
        {
            cout << i.first << '\n';
        }
    }

    return 0;
}