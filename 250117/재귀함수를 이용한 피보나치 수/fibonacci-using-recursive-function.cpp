#include <iostream>

using namespace std;

int N;

int fibo(int num) {
	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	
	return fibo(num-1) + fibo(num-2);

}

int main() {
    cin >> N;

    cout << fibo(N);

    return 0;
}