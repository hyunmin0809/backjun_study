#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1e5;
int N, num;
char c;
vector<int> prime(MAX, 0);

void pushPrime(int num, char c)
{
    for (int i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            if (isAdd == '*')
            {
                // 곱하기일경우
                prime[i]++;
            }
            else
            {
                // 마이너스일 경우
                prime[i]--;
            }
            num /= i;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, temp;
    int i;
    char A;

    cin >> N;

    cin >> temp;
    pushPrime(prime, temp, '*');

    for (i = 1; i < N; i++)
    {
        cin >> A;
        cin >> temp;
        if (!temp)
        {
            cout << "mint chocolate";
            return 0;
        }
        pushPrime(prime, temp, A);
    }

    // 입력 받은 숫자 소인수분해해서 1제외 *면 +1 추가 하고 /면  -1 해준다.
    // 안에 든 숫자가 음수면 정수가 아니란 소리
    //*0되면 바로 정수취급

    for (i = 1; i * i <= MAX; i++)
    {
        if (prime[i] < 0)
        {
            cout << "toothpaste";
            break;
        }
    }
    if (i * i > MAX)
    {
        cout << "mint chocolate";
    }
    return 0;
}