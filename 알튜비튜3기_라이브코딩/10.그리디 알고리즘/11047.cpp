#include <iostream>
#include <vector>

using namespace std;

//필요한 동전의 최솟값을 구하는 함수
int countCoin(int n, int k, vector<int> &coin)
{
    //이미 정렬되어 있어서 정렬 안해도 된다
    int count = 0;
    int idx = n - 1; //동전을 보는 인덱스
    while (k)
    { // k는 남은 금액
        count += k / coin[idx];
        k %= coin[idx];
        idx--;
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> coin(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    //연산 + 출력
    cout << countCoin(n, k, coin);

    return 0;
}