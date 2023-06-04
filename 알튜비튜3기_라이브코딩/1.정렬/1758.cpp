//알바생강호

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    long long int total = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<>());

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > i)
            total += arr[i] - i;
        else
            break;
    }

    cout << total;

    return 0;
}