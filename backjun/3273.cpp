#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    cin >> x;
    
    unordered_set<int> s;
    int count = 0;
    
    for(int i = 0; i < n; ++i) {
        int target = x - arr[i];
        if(s.find(target) != s.end()) {
            count++;
        }
        s.insert(arr[i]);
    }
    
    cout << count << "\n";
    
    return 0;
}
