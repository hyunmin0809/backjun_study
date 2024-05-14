#include<iostream>
#include<vector>

using namespace std;

vector<vector<char>> cloudPos; //입력
vector<vector<int>> solution; //결과값

int findResult(int m, int n)
{
    if(cloudPos[m][n] == 'c'){
        return 0;
    }

    for(int i = n-1; i >= 0; i--){
        if(cloudPos[m][i] == 'c'){
            return (n-i);
        }
    }
  
    return -1;
}

int main(){
    int H, W;

    cin >> H >> W;
    //이중 벡터 선언 

    cloudPos.resize(H,vector<char>(W));
    solution.resize(H,vector<int>(W));

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> cloudPos[i][j];
        }
    }

    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            solution[i][j] = findResult(i, j);
        }
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << solution[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}