#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, t;
    cin >> m;

    set<int> num;

    while (m--)
    {
        int n;
        cin >> n;
        num.insert(n);
    }

    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;
        if (num.count(k))
        {
            cout << "1 ";
        }
        else
            cout << "0 ";
    }

    return 0;
}