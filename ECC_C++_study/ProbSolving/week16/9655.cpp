//점화식으로 풀어야하나 고민했는데 고민해보니까 그냥 %로 풀면 되는 쉬운 문제였다...

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N;
    cin >> N;
    
    // 돌의 개수를 4로 나눈 나머지에 따라 승자를 결정함.
    if (N % 4 == 1 || N % 4 == 3) {
        cout << "SK" << "\n";
    } else {
        cout << "CY" << "\n";
    }

    return 0;
}
