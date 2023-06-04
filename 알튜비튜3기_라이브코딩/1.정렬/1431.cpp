// 시리얼 번호

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumArr(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            sum += s[i] - '0';
        }
    }
    return sum;
}

bool cmp(const string &s1, const string &s2)
{
    if (s1.size() != s2.size())
    {
        return s1.size() < s2.size();
    }
    if (sumArr(s1) != sumArr(s2))
    {
        return sumArr(s1) < sumArr(s2);
    }
    return s1 < s2;
}

int main()
{
    int n;
    cin >> n;

    vector<string> arr(n, "");

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
