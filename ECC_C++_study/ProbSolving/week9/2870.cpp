#include<iostream>
#include<vector>
#include<algorithm> // for sort
#include<string> // for stoi

using namespace std;

bool cmp(string a, string b){
	if(a.size()==b.size())
		return a<b;
	return a.size()<b.size();
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N;
    string input;
    vector<string> num;

    cin >> N;
    while(N--){
        string temp = "";
        cin >> input;
        for(int i = 0; i < input.length(); i++){
            if(input[i] >= '0' && input[i] <= '9'){
                temp += input[i];
            }
            else if(!temp.empty()) { //만약 문자이고, tmp가 empty가 아닐때. 이전까지 들어온 문자를 보내줘야함.
                //만약 temp에 들어있는게 001 0002 이런식이라면
                // 앞에 있는 0을 제거
                while (temp.size() > 1 && temp[0] == '0') {
                    temp = temp.substr(1);
                }
                num.push_back(temp);
                temp = "";
            }
        }
        //마지막이 숫자일때.
        if(!temp.empty()){
            while (temp.size() > 1 && temp[0] == '0') {
                temp = temp.substr(1);
            }
			num.push_back(temp);
        }
    }
    sort(num.begin(), num.end(), cmp);
    for(auto it : num) {
        cout << it << "\n";
    }
    return 0;
}

/*

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N, start = -1;
    string input;
    bool isFlag = false;
    cin >> N;

    vector<long> number(N);

    while(N--){
        cin >> input;
        for(int i = 0; i < input.length(); i++){
            if(input[i] >= '0' && input[i] <= '9'){
                if(!isFlag){
                    start = i; 
                    isFlag = true;
                }
            }
            else{
                if(isFlag){
                    long num = stol(input.substr(start, i - start));
                    isFlag = false;
                    number.push_back(num);   
                }
            }
            if(isFlag){
                long num = stol(input.substr(start));
                number.push_back(num);
            }
        }
    }

    sort(number.begin(), number.end());


    for(long num : number) {
        cout << num << " ";
    }
    return 0;
}*/

//100글자 제한이라 stoll 써도 해결 안된다. 새롭게 해야함...

