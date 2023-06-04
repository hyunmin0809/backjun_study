#include <iostream>
#include <vector>

using namespace std;

const int MAX = 5e6;

vector<bool> findPrime()
{
    vector<bool> is_prime(MAX + 1, true);
    // 0과 1은 소수가 아니므로 false
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= MAX; i++)
    {
        if (!is_prime[i]) // 소수가 아니라면
        {
            continue;
        }

        for (int j = i * 2; j <= MAX; j += i) // 소수라면
        {
            if (is_prime[j])
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    auto prime = findPrime();

    while (n--)
    {
        int t;
        cin >> t;

        while (t)
        {
        }
    }

    return 0;
}