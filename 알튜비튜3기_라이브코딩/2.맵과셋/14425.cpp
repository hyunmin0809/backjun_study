#include <iostream>
#include <map>
#include <set>

using namespace std;

int findResult(set<string> s, int m)
{
    string str;
    int result = 0;
    while (m--)
    {
        cin >> str;
        result += s.count(str); // 문자열 존재하는 만큼 result에 더해주면 됨 만약 없으면 0이 뜸
    }
    return result;
}

int main()
{
    int n, m;
    string str;
    cin >> n >> m;

    set<string> s;

    while (n--)
    {
        cin >> str;
        s.insert(str); // set에 문자열 받고
    }

    cout << findResult(s, m);

    return 0;
}