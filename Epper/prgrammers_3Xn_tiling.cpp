/*#include <iostream>
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


//결국 점화식은 dp[n] = dp[n-2]*dp[2] + dp[n-4]*2(newcase) ... 이런 식인 셈. 이걸 외우면 5개짜리도 ㄱㄴ할듯 
// 4개짜리 점화식은 dp[n] = dp[n-3] * 3 + dp[n-6] * 4 + dp[n-9] * 6...

using namespace std;
//1000000007 선언
const int mod = 1000000007;

int solution(int n){
    if(n % 2 != 0) return 0; //홀수인 경우는 불가능

    long long dp[5001] = {0, };

    dp[0] = 1;
    dp[2] = 3;

    //첫 식. 
    for(int i = 4; i <= n; i += 2){
        dp[i] = dp[i-2] * 3;
        for(int j = i - 4; j>= 0; j -= 2){
            dp[i] += dp[j] * 2;
        }

        dp[i] %=  mod;
    }


    //그 다음 점화식.

    //%mod 해주기

    return dp[n];
    
}
*/

using namespace std;
const int MOD = 1e9 + 7;

int solution(int n){
    if(n % 2 != 0) return 0;

    long long dp[5001] = {0,};
    dp[0] = 1;
    dp[2] = 3;

    for(int i = 4; i <= n; i+=2){
        dp[i] = dp[i-2] * 3;
        for(int j = i-4; j>= 0; j -= 2){
            dp[i] += dp[j] * 2;
        }
        dp[i] % MOD;
    }

    return dp[n];
}
