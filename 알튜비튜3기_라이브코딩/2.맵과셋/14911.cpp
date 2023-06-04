#include <iostream>
#include <map>

using namespace std;

int findPair(map<int, int> mp, int sum)
{
    int result = 0;

    for (auto i : mp)
    {                             // 범위기반 for문
        int temp = sum - i.first; // key값 뺌
        if (temp < (sum + 1) / 2)
        {
            break; // 만약 temp가 구하려는 값의 반절보다 작으면 break; 그렇게 함으로써 i.first는 작은 값으로 구할 수 있다. (중복 제거)
        }

        mp[i.first]--; // 한번 썼으니까 다시 못씀
        if (mp[temp] > 0)
        { // 한번이라도 존재한다면
            cout << i.first << " " << temp << "\n";
            mp[temp]--; // 상대 쌍도 한번 썼으므로 내려줌
            result++;
        }
    }
    // inter = mp.begin(); 해서 사용해도 됨.
    return result;
}

int main()
{
    int n, sum;
    map<int, int> mp;

    while (cin >> n)
    {
        mp[n]++;
        // 기본적으로 0을 담고 있는듯
        // key값 n, value는 n이 나온 개수 카운트 함
    }

    sum = n; // 마지막에 입력됐으므로 얘가 목표

    cout << findPair(mp, sum); // 그냥 mp 보내도 되나봄 맵은 가능.

    return 0;
}