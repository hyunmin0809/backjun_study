#include <iostream>
#include <string>
#include <vector>

#define Mod 10007

using namespace std;

int solution(int n){
    long dp[1001] = {0, }; 
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
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