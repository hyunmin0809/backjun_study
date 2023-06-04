#include <iostream>
#include <vector>
//향상된 버블 정렬

using namespace std;

vector<int> arr;

void advancedBubbleSort(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int isSwap = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            break; //한번도 스왑이 일어나지 않았다 즉, 정렬이 완료됨.
        }
    }
}

int main()
{
    int n;

    cin >> n;
    arr.assign(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    advancedBubbleSort(n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}