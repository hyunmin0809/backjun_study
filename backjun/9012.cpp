#include <iostream>
#include <string>

// 굳이 스택을 쓸 필요가 없는 문제 괄호쌍이 한개의 종류밖에 없음

using namespace std;

int main()
{
    int T;
    cin >> T;

    string str;

    while (T--)
    {
        cin >> str;
        int cnt = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                cnt++;
            }
            else
                cnt--;
            if (cnt < 0)
                break;
        }
        if (cnt)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}