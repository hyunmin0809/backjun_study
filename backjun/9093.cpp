#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int T;
    string str;
    stack<char> st;

    cin >> T;
    cin.ignore(); // 버퍼 지우기
    while (T--)
    {
        getline(cin, str);
        str += ' ';

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
                cout << ' ';
            }
            else
                st.push(str[i]);
        }
        cout << "\n";
    }

    return 0;
}