#include <iostream>

using namespace std;

int main(){
    int input;
    int cnt = 0;
    cin >> input;

    while(input != 0){
        if(input % 2 == 1) //나머지가 1
            cnt++;
        input /= 2;
    }

    cout << cnt;

    return 0;
}