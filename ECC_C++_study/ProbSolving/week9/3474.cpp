#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int T, N; 

    cin >> T;

    while(T--){
        int result = 0;
        cin >> N;
        for(int i = 5; i <= N; i *= 5){
            result += (int)(N / i);
        }
        cout << result << "\n";
    }
    return 0;
}