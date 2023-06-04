#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, total = 0;

    cin >> n;

    while (n--)
    {
        int i = 0;
        bool visit[26] = {0};
        string input;
        cin >> input;
        for (i = 0; i < input.size(); i++)
        {
            if (!i)
            { // i가 0이면 지나감
                visit[input[i] - 'a'] = 1;
                continue;
            }
            if (visit[input[i] - 'a']) //한번 나왔던 알파벳
            {
                if (input[i - 1] != input[i]) //만약 바로 전에 없는거라면
                {
                    break; //틀렸으므로 나가버림
                }
            }

            visit[input[i] - 'a'] = 1; //갔다옴
        }
        if (i == input.size())
        {
            total++;
        }
    }

    cout << total;
    return 0;
}