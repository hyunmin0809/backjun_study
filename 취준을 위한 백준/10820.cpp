#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    while (getline(cin, s))
    {
        int low = 0, high = 0, num = 0, space = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                space++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                high++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                low++;
            }
            else
                num++;
        }
        cout << low << ' ' << high << ' ' << num << ' ' << space << '\n';
    }

    return 0;
}