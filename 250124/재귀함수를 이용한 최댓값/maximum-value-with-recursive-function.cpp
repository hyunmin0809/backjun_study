#include <iostream>

using namespace std;

int n;
int arr[100];

int f(int cnt, int max){
    if(cnt == 0) return max;

    if(arr[cnt-1] > max){
        max = arr[cnt-1];
    }
    return f(--cnt, max);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << f(n, 0);

    return 0;
}