#include <iostream>
#include <vector>

using namespace std;

typedef pair<long int, long int> ci;

int main(){
    int n;
    cin >> n;
    
    vector<ci> vv(n+1);
    
    for(int i = 0; i < n; i++){
        cin >> vv[i].first;
        cin >> vv[i].second;
    }

    vv[n].first = vv[0].first;
    vv[n].second = vv[0].second;
    double result = 0;

    for(int i = 0; i < n; i++){
        result += (vv[i].first*vv[i+1].second) - (vv[i+1].first*vv[i].second);
    }

    cout << fixed;
    cout.precision(1);
    cout << abs(result)/2.0;
}