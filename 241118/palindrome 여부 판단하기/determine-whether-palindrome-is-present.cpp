#include <iostream>
#include <stack>

using namespace std;

bool sol(string str){
    int i = 0;
	stack<char> st;

    for (; i < str.size()/2; i++){
        st.push(str[i]);
    }

    if(i % 2 != 0) i++;

    for(; i < str.size(); i++){
        if(st.top() != str[i]) {return false;}
        else st.pop();
    }
    return true;
}

int main() {
    string str;
    cin >>str;

    if(sol(str)) cout << "Yes";
    else cout << "No";

    return 0;
}