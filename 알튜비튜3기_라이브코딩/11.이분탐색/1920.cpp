#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binarySearch(int left, int right, int target, vector<int> &arr)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            return true;
        }
        if (arr[mid] < target)
        { // 작으면 타겟이 오른쪽 따라서 left 옮겨줘야함
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, input;

    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cin >> m;
    while (m--)
    {
        cin >> input;

        cout << binarySearch(0, n - 1, input, arr) << "\n";
    }
    return 0;
}