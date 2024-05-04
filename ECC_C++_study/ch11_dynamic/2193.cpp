#include <iostream>

using namespace std;

static long dp[91];

long int solution(int n){
    dp[1] = 1;
    dp[2] = 1;
    
   for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
  
    return dp[n];
    
}

int main(){
    int N;
    cin >> N;
    cout << solution(N);
}