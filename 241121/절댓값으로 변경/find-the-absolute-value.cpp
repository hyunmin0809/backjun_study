#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void sol(vector<int> &v){
    for(auto it = v.begin(); it != v.end(); ++it){
    *it = abs(*it);
    }
    return;
}

int main() {
    int n;
    vector<int> v;

    cin >> n;

    while(n--){
        int input;
        cin >> input;
        v.push_back(input); 	
    }

    sol(v);

    for(auto it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}