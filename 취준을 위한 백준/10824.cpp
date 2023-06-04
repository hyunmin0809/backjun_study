#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A, B, C, D;

    cin >> A >> B >> C >> D;

    A += B;
    C += D;

    long long num1 = stoll(A);
    long long num2 = stoll(C);

    cout << num1 + num2;

    return 0;
}