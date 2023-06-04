#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, num, a, b;

    cin >> n >> m;
    vector<int> sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        sum[i] = sum[i - 1] + num;
    }

    while (m--)
    {
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << "\n";
    }

    return 0;
}