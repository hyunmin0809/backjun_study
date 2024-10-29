#include <iostream>
using namespace std;

int main() {
    int N, num = 1;
    cin >> N;

    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(num == 10){
                num = 1;
            }
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}