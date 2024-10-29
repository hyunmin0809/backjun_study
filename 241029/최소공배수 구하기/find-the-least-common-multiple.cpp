#include <iostream>
using namespace std;

int gcd(int a, int b) //유클리드 호제법 기억
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b){
    return a * b / gcd(a,b);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << lcm(n,m);
    return 0;
}