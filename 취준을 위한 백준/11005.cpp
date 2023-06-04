#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int B, N;
    string s;

    cin >> N >> B;

    while (N)
    {
        int rmd = N % B;
        if (rmd < 10)
        {
            s += ('0' + rmd);
        }
        else
        {
            rmd = rmd - 10 + 'A';
            s += rmd;
        }
        N /= B;
    }
    reverse(s.begin(), s.end());
    cout << s;
}