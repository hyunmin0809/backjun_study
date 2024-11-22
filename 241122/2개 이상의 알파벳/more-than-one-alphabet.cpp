#include <iostream>

using namespace std;

bool sol(string str){
    for(int i = 0 ; i< str.size(); i++){
        if(str[0] != str[i]){
            return true;
        }
    }

    return false;
}

int main() {
    string str;
    cin >> str; 

    if(sol(str)) cout << "Yes";
    else cout << "No";

    return 0;       
}