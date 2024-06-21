#include<iostream>

using namespace std;

int main(){
    int n, total = 0;
    string str;
    cin >> n >> str;

    for(int i = 0; i < str.size(); i++){
        total += str[i];
    }

    cout << total;

    return 0;
}