#include<iostream>
#include<string>
#include<set>

using namespace std;

int main (){
    string temp, input;
    set<string> substrings;

    cin >> input; 

    for(int i = 0; i < input.length(); i++){
        temp = "";
        for(int j = i; j < input.length(); j++){
            temp += input[j];
            substrings.insert(temp);
        }
    }

    cout << substrings.size();


}