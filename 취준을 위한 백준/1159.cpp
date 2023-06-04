#include <iostream>
#include <vector>

using namespace std;

vector<int> alp(26, 0);

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string input;
        cin >> input;
        alp[input[0] - 'a']++;
    }
    bool result = true;
    for (int i = 0; i < 26; i++)
    {
        if (alp[i] >= 5)
        {
            cout << (char)(97 + i);
            result = false;
        }
    }
    if (result)
        cout << "PREDAJA";

    return 0;
}