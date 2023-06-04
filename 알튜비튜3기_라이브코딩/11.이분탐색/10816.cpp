#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lowerBound(int left, int right, int target, vector<int> &arr)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        //같지 않을때
        if (arr[mid] >= target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    // left를 리턴하는 잉
    // break 직전 left 와 right는 같은 곳을 가리킴
    //이 상태에서 mid가 가리키는 값은 target 미만이기 때문에 left 포인터가 이동하고 break

    return left;
}

int upperBound(int left, int right, int target, vector<int> &arr)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] <= target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
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
        cout << upperBound(0, n - 1, input, arr) - lowerBound(0, n - 1, input, arr) << "\n";
    }
    return 0;
}