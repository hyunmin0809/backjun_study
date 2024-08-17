#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = i; j < N; j++) {
            sum += A[j];
            if (sum == M) {
                count++;
            }
        }
    }
    
    cout << count;
    
    return 0;
}