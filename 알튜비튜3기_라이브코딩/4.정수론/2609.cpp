#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    //최대공약수 구하기
    // a,b중 더 작은 걸로 반목문 돌려서 최대공약수 리턴
    for (int i = min(a, b); i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i; //큰수 부터 해서 얘가 최대공약수
        }
    }
    return 1;
}

int gcdRecursion(int a, int b)
{ //유클리드 호제법
    if (b == 0)
        return a;
    return gcdRecursion(b, a % b);
}

int main()
{
    int m, n;
    cin >> m >> n;
    int g = gcdRecursion(max(m, n), min(m, n));
    int l = m * n / g;
    cout << g << "\n"
         << l;
    return 0;
}