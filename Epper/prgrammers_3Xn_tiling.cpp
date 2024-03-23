#include <iostream>
#include <string>
#include <vector>

#define Mod 1000000007

using namespace std;

int solution(int n){
    if(n%2 != 0) return 0; //n이 홀수인 경우는 불가능

    long long dp[5001] = {0, }; //long long으로 선언해서 큰 수를 받을 수 있게함
    dp[0] = 1; //dp[0] = 1로 초기화 해줘야 안쪽 for문 돌때 dp[0]*2 로 매번 더해짐 (+2 추가되기 때문에)
    dp[2] = 3; 

    for (int i = 4; i <= n; i+= 2){
        dp[i] = dp[i-2] *3;
        for(int j = i - 4; j >= 0; j -= 2){
            dp[i] += dp[j] * 2;
        }

        dp[i] %= Mod;
    }
    return dp[n];

}

int main(){
    int n;
    cin >> n;
    cout << solution(n); 
    return 0;
}

