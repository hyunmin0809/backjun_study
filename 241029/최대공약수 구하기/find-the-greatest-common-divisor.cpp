#include <iostream>
using namespace std;

int main() {
    int n, m, result;
    cin >> n >> m;
    int temp = n > m ? m : n; //temp에 작은거

    for(int i = 1; i <= temp/2; i++){
        if(n % i == 0 && m % i == 0){
            result = i;
        }
    }

    cout << result;

    return 0;
}