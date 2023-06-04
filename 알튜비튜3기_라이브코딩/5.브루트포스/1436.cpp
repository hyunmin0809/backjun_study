#include <iostream>
#include <string>

using namespace std;

int getEndNumber(int n)
{
    int num = 666 - 1;

    while (n > 0)
    {
        string s = to_string(++num); // string으로 바꾸면 훨씬 편해짐
        if (s.find("666") != s.npos)
        {
            n--;
        }
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    cout << getEndNumber(n);
    return 0;
}