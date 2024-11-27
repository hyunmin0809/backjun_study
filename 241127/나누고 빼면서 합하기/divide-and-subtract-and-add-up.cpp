#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v1;


int sol(){
    int total = 0;
    while(m != 1){
        total += v1[m-1];
        if(m % 2 == 0) m /= 2;
        else m--;
    }

    total += v1[0];
    return total;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v1.push_back(a);
    }

    cout << sol();

    return 0;
}