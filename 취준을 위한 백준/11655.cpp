#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    for (int i = 0; i < input.size(); i++)
    {
        cin >> input[i];
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            if (input[i] - 'a' < 13)
            {
                input[i] += 13;
            }
            else
                input[i] -= 13;
        }
        else if (input[i] >= 'A' && input[i] <= 'Z')
        {
            if (input[i] - 'A' < 13)
            {
                input[i] += 13;
            }
            else
                input[i] -= 13;
        }
    }

    cout << input;
    return 0;
}