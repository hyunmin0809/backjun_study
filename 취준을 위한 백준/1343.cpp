#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, result = "";
    int n = 0;

    cin >> input;

    input += " ";
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'X')
        {
            n++;
        }
        else if (input[i] == '.')
        {
            result += ".";
            if (n % 2 != 0)
                break;
        }

        if (n == 4)
        {
            result += "AAAA";
            n = 0;
        }
        else if (n == 2 && input[i + 1] != 'X')
        {
            result += "BB";
            n = 0;
        }
    }

    if (n % 2 == 1)
        cout << -1;
    else
        cout << result;

    return 0;
}