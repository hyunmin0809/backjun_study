#include<iostream>
#include<stack>

using namespace std;

int cnt = 0; 
string ans = "";

void coutPush(stack<int> &st, int element){
    st.push(element);
    cnt++;
    ans += "+\n";
}

void coutPop(stack<int> &st){
    st.pop();
    ans += "-\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    stack<int> st;
    int input;

    while(n-- > 0){
        cin >> input;
        while(cnt < input){  //만약 cnt < input 이면 while
            coutPush(st, cnt+1); // input까지 들어감
            //coutpush계속 어차피 안에서 계속 ++돼서 ㄱㅊ음         
        }        
        //위의 while로 cnt >= input인 상황.
        if(st.top() == input){    //top == input
            coutPop(st);   //pop
        }
        else{    //top != input
            cout << "NO";
            return 0;       
        }
    
    }
    cout << ans;
    return 0;
}