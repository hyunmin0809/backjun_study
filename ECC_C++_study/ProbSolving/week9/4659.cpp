#include <iostream>

using namespace std;

bool isVow(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string reportAccept(string in){
    int vow = 0, con = 0;
    bool vowExist = false;
    for(int i = 0; i < in.length(); i++){
        if(isVow(in[i])){
            vow++;
            con = 0;
            vowExist = true;
        }
        else{
            con++;
            vow = 0;
        } 

        if(vow == 3 || con == 3){
            return "<" + in + ">" + " is not acceptable.";
        }
    
        if((i != 0) && (in[i-1] == in[i]) && (in[i] != 'e' && in[i] != 'o')){
            return "<" + in + ">" + " is not acceptable.";
        }
    }
    if(!vowExist){
        return "<" + in + ">" + " is not acceptable.";
    }
    return "<" + in + ">" + " is acceptable."; 
}

int main(){
    string input;
    cin >> input;
    while(input != "end"){
        cout << reportAccept(input) << "\n";
        cin >> input;
    }
   
    return 0;
}