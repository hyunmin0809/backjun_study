#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<vector<int>> houseFee(n, vector<int>(3,0));
    vector<vector<int>> totalFee(n, vector<int>(3,0));


    for(int i= 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> houseFee[i][j];
        }
    }

    for(int i = 0; i <3; i++){
        totalFee[0][i] = houseFee[0][i];
    }
    
    for(int i = 1; i < n; i++){
        totalFee[i][0] = min(totalFee[i-1][1] , totalFee[i-1][2]) + houseFee[i][0];
        totalFee[i][1] = min(totalFee[i-1][0] , totalFee[i-1][2]) + houseFee[i][1];
        totalFee[i][2] = min(totalFee[i-1][1] , totalFee[i-1][0]) + houseFee[i][2];
    }

    cout << min(min(totalFee[n-1][0], totalFee[n-1][1]), totalFee[n-1][2]); 

    return 0;
}