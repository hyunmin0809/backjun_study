#include <iostream>
#include <vector>

using namespace std;

int findPrime(int n, int k)
{
    vector<bool> is_prime(n + 1, true);
    // 0과 1은 소수가 아니므로 false
    is_prime[0] = is_prime[1] = false;

    int cnt = 0; //현재까지 기록된 수의 개수를 기록

    for (int i = 2; i <= n; i++)
    {
        if (!is_prime[i])
        {
            continue;
        }

        for (int j = i; j <= n; j += i)
        {
            if (!is_prime[j])
            {
                continue;
            }
            is_prime[j] = false;
            if (++cnt == k)
            {
                return j;
            }
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << findPrime(n, k);
    return 0;
}