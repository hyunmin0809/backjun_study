#include<iostream>
#include<vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;

    cin >> n >> m;

    int temp;

    vector<vector<int>> sum(n+1, vector<int>(n+1,0));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> temp;
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + temp;
     
        }
    
    }

    
    int answer;
    int x1, x2, y1, y2;
    
    for(int i=0;i<m;i++){
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        answer = sum[x2][y2] - sum[x2][y1-1] - sum[x1-1][y2] + sum[x1-1][y1-1]; 
        cout << answer << "\n"; //endl 쓰지 말 것 오래 걸린다. 미친 거 아님???
    }
    return 0;
}