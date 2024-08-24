#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    
    int diagonal = 1;
    int sum = 0;       
    
    while (sum + diagonal < X) {
        sum += diagonal;
        diagonal++;
    }
    
    int position = X - sum;  
    
    int numerator, denominator;
    if (diagonal % 2 == 1) {
        numerator = diagonal - position + 1;
        denominator = position;
    } else {
        numerator = position;
        denominator = diagonal - position + 1;
    }
    
    cout << numerator << '/' << denominator;
    
    return 0;
}