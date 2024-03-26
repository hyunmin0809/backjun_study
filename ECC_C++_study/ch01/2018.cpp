//해당 문제는 투 포인터 문제다

#include <iostream>

using namespace std;

int solution(int input){
    int ans = 0;
    for(int start = 1; start <= input; start++){
        int tot = start;
        for(int end = start + 1; end <= input; end++){
            tot += end;
            if(tot == input){
                ans++;
                break;
            }else if(tot > input){
                break;
            }
        }
    }
    ans++;
    
    return ans;
}

int main(){
    int input;
    cin >> input;
    cout << solution(input);
    return 0;
}