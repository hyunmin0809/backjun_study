#include <iostream>
#include <set>

using namespace std;

int main()
{

    int n;
    string p, status;
    set<string> s;

    cin >> n;

    while (n--)
    {
        cin >> p >> status;
        if (status == "enter")
            s.insert(p);

        else
            s.erase(p);
    }

    for (auto iter = s.rbegin(); iter != s.rend(); iter++)
    {
        cout << *iter << "\n"; // endl은 안되나봄....
    }
}