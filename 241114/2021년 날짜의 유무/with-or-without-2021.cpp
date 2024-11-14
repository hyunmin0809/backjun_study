#include <iostream>
using namespace std;

string sol(int M, int D){
    switch(M){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: if(D <= 31) return "Yes";
        case 2: case 4: case 6: case 9: case 11: if(D<=30) return "Yes";
        default: return "No";
    }

}

int main() {    
    int M, D;
    cin >> M >> D;

    cout << sol(M,D);

    return 0;
}