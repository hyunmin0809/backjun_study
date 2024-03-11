#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> tree;

    string input;
    float total = 0;

    while (getline(cin, input))
    {
        total++;
        if (tree.count(input))
        {
            tree[input]++;
        }
        else
            tree[input] = 1;
    }
    cout << fixed;
    cout.precision(4);
    for (auto i : tree)
    {
        float val = (i.second / total) * 100;
        cout << i.first << " " << val << "\n";
    }

    return 0;
}