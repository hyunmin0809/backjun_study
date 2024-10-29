#include <iostream>
using namespace std;

int main() {
    int n, m, result = 1;
    cin >> n >> m;
    int temp = n > m ? m : n; //temp에 작은거

    for(int i = 1; i <= temp; i++){
        if(n % i == 0 && m % i == 0){
            result = i;
        }
    }

    cout << result;

    return 0;
}