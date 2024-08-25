#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);
    int N;
    cin >> N;
    
    vector<int> numbers(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }
    
    // 내림차순 정렬
    sort(numbers.begin(), numbers.end(), greater<int>());
    
    // 정렬된 결과 출력
    for (int i = 0; i < N; ++i) {
        cout << numbers[i] << "\n";
    }
    
    return 0;
}