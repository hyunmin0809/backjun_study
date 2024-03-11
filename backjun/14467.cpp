#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    vector<int> cow(n, 2);

    while (n--)
    {
        int num, pos;
        cin >> num >> pos;
        num--;
        if (cow[num] == 2)
            cow[num] = pos;
        else if (cow[num] != pos)
        {
            cow[num] = pos;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}