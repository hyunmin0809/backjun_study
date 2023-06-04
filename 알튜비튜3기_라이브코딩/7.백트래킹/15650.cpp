#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 8;

int n, m;
vector<int> num(SIZE);

void backtracking(int cnt, int start)
{ // cnt : 수열 index, start : 현재 탐색 시작하는 원소값
    if (cnt == m)
    { // m개 수 고르면
        for (int i = 0; i < cnt; i++)
        {
            cout << num[i] << ' ';
        }
        cout << "\n";
        return;
    }

    for (int i = start; i <= n; i++) // i:고르려는 수
    {

        num[cnt] = i;
        backtracking(cnt + 1, i + 1);
    }
}

int main()
{
    cin >> n >> m;
    backtracking(0, 1);
    return 0;
}