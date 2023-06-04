#include <iostream>
#include <vector>
#include <algorithm> //sort 사용 위해
using namespace std;

typedef pair<int, int> ci;

//진행할 수 이는 회의의 최댓값을 리턴하는 함수
int getMaxCount(int n, vector<ci> &meetings)
{
    int count = 0;
    int prev_end = 0;
    for (int i = 0; i < n; i++)
    {
        auto [end, start] = meetings[i]; //변수
        if (start >= prev_end)
        {
            count++;
            prev_end = end;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<ci> meetings(n, {0, 0});

    //이후 정렬을 할 때
    // 1. 빨리 끝나는 순서대로
    // 2. 빨리 시작하는 순서대로
    //위처럼 입력하면 따로 정렬 함수 안 만들어도 정렬이 잘 됨

    for (int i = 0; i < n; i++)
    {
        cin >> meetings[i].second >> meetings[i].first;
    }
    sort(meetings.begin(), meetings.end());
    cout << getMaxCount(n, meetings);
    return 0;
}