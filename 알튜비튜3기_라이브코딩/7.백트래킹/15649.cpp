#include <iostream>
#include <vector>

using namespace std;
//재귀함수 사용시 함수를 계속 호출하때 매개변수도 생성되므로 전역변수로 선언하는게 더 낫다

const int SIZE = 8;
int n, m;
vector<int> num(SIZE);
vector<bool> check(SIZE);

void backtracking(int cnt) // cnt :수열의 인덱스
{
    if (cnt == m)
    {
        for (int i = 0; i < cnt; i++)
        {
            cout << num[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) // i : 고르라는 수
    {
        if (!check[i]) //현재수열에 해당수가 없으면 사용 가능
        {
            num[cnt] = i;
            check[i] = true;
            backtracking(cnt + 1); //다음 인데긋 수 호출
            check[i] = false;
        }
    }
}

int main()
{
    cin >> n >> m;
    backtracking(0);
    return 0;
}