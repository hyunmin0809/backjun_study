#include<iostream>
#include<string>
#include<stack>

using namespace std;

int ans = 0;

void check(string str){
    stack<char> st;
    if(str.size() % 2 == 1){ //홀수라면 
        return;
    }
    for(int i = 0; i < str.size(); i++){
        if(st.empty() || st.top() != str[i]){ //만약 stack이 비어있거나 가장 나중에 들어온 것이 str[i]와 같지 않다면
            st.push(str[i]);
        }
        else if(st.top() == str[i]){
            st.pop();
        }
    }

    if(st.empty()) ans++;
}

int main(){
    int n;
    string input;
    cin >> n;

    while(n--){
        cin >> input; 
        check(input);
    }
    cout << ans;
    return 0;
}