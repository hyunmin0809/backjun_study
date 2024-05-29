#include<iostream>

using namespace std;

int main(){
    int cnt = 0;
    int n, m, j, start, end;

    cin >> n >> m >> j;
    start = 1; 
    end = m;

    while(j--){
        int apple;
        cin >> apple;
        while(true){
            if(apple >= start && apple <= end) break;
            else if(apple < start) {
                start--; end--; cnt++;
            }
            else{
                start++; end++; cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}