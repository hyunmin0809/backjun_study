#include <iostream>
#include <vector>

using namespace std;

string sol(vector<int> &a, vector<int> &b){
    
    int cnt = 0;

    for(int i = 0; i < a.size() && cnt < b.size(); i++){
        if(b[cnt] == a[i]){
            cnt++;
            continue;
        }
        else cnt = 0; 
    }

    if(cnt == b.size()){
        return "Yes";
    } 
    else 
        return "No";
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> v1(a), v2(b);

    for (int i = 0; i < a; i++){
        cin >> v1[i];
    }

    for (int i = 0; i < b; i++){
        cin >> v2[i];
    }

    cout << sol(v1, v2);

    return 0;
}