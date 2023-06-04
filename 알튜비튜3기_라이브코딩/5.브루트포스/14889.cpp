#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_DIFF = 1000;
vector<vector<int>> power;

int sumPower(vector<int> team)
{
    int sum = 0; //능력치 합
    int size = team.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            sum += power[team[i]][team[j]] + power[team[j]][team[i]];
        }
    }
    return sum;
}

int calcDiff(int n, vector<bool> &is_teamA)
{
    vector<int> teamA; // A팀에 속한 사람으 인덱스
    vector<int> teamB;

    for (int i = 0; i < n; i++)
    {
        if (is_teamA[i])
        {
            teamA.push_back(i);
        }
        else
        {
            teamB.push_back(i);
        }
    }

    int diff = sumPower(teamA) - sumPower(teamB);
    return abs(diff);
}

int findMinDiff(int n)
{
    // 1. 팀 나누기
    // 2. 팀마다 능력치 합 구하기
    // 3. 능력치 차이를 최소 기록하기

    //조합을 구하기 위해 임시배열 만들기

    vector<bool> is_teamA(n, true);
    for (int i = 0; i < n / 2; i++)
    {
        is_teamA[i] = false;
    }
    int answer = MAX_DIFF;
    do
    {
        //팀이 결정된 상황. 최솟값 기록해야함
        answer = min(answer, calcDiff(n, is_teamA));
    } while (next_permutation(is_teamA.begin() + 1, is_teamA.end()));

    return answer;
}

int main()
{
    int n;

    cin >> n;
    power.assign(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> power[i][j];
        }
    }

    //브루트포스로 팀을 나눠본 후 나눌 수 있는 차이의 최솟값을 기록...
    cout << findMinDiff(n);
    return 0;
}