#include <iostream>
using namespace std;

int sol(int a, int b, int c){
    switch(b){      
        case '*' : 
            return a * c; 
            break;
        case '+' : 
            return a + c; 
            break;
        case '-' : 
            return a - c; 
            break;
        case '/' : 
            return a / c; 
            break;
        default :
            return -100;
            break;
    }
}

int main() {
    int a, c;
    char b;

    cin >> a>> b >> c;

    int result = sol(a,b,c);

    if(result == -100)
        cout << "False";
    else
        cout << a << " " << b << " " << c << " = " << sol(a,b,c); 
    return 0;
}