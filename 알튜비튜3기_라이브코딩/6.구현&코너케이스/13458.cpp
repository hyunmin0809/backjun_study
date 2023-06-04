#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, b, c;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> b >> c;

    long long answer = n;

    for (int i = 0; i < n; i++)
    {
        int count = arr[i] - b;
        if (count <= 0)
        {
            continue;
        }

        answer += count / c;
        if (count % c > 0)
        {
            answer++;
        }
    }

    cout << answer;

    return 0;
}