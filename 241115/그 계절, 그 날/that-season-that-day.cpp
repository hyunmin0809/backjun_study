#include <iostream>
using namespace std;

bool isYoon(int Y){
    if(Y % 4 != 0) return false;
    else if (Y % 400 == 0) return true;
    else if (Y % 100 == 0) return false;
    
    return true;
} 

bool isExist(int Y, int M, int D){
    switch(M){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: if(D <= 31) return true;
        case 4: case 6: case 9: case 11: if(D<=30) return true;
        case 2: 
            if(D<=28) return true;
            else if(D == 29 && isYoon(Y)) return true;
        default: return false;
    }

}

string season(int M){
    if(M >= 3  && M <= 5) return "Spring";
    else if(M >= 6  && M <= 8) return "Summer";
    else if(M >= 9  && M <= 11) return "Fall";
    else return "Winter";
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if(isExist(y,m,d)){
        cout << season(m);
    }else{
        cout << -1;
    }
    



    return 0;
}