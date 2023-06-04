#include <iostream>
#include <vector>

using namespace std;

vector<int> arr, sorted;

void merge(int left, int middle, int right)
{
    int p1 = left; //왼쪽 배열 포인터
    int p2 = middle + 1;
    int k = left;

    //작은 순서대로 배열에 삽입
    while (p1 <= middle && p2 <= right)
    {
        if (arr[p1] < arr[p2])
        {
            sorted[k++] = arr[p1++];
        }
        else
        {
            sorted[k++] = arr[p2++];
        }
    }
    //남은애들 옮겨줘야함
    while (p1 <= middle)
    { //왼쪽 배열에 탐색 안한 원소 있다
        sorted[k++] = arr[p1++];
    }
    while (p2 <= right)
    {
        sorted[k++] = arr[p2++];
    }
    //원래 배열에 다시 넣기
    for (int i = left; i <= right; i++)
    {
        arr[i] = sorted[i];
    }
}

void mergeSort(int left, int right)
{ //시작과 끝
    if (left < right)
    { //크기가 1보다 큰 경우만 고려
        int mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid + 1, right);

        merge(left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;

    arr.assign(n, 0);
    sorted.assign(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}