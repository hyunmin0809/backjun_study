#include <iostream>
#include <vector>

using namespace std;

void changeVec(vector<int> &v1){
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] % 2 == 0){
            v1[i] /= 2;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++){
        cin >> v1[i]; 
    }
    changeVec(v1);
    for(int i = 0; i < n; i++){
        cout << v1[i] << " "; 
    }

    return 0;
}