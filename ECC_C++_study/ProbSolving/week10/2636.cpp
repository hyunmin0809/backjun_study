#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> cheezeMap;
vector<vector<bool>> visited;

typedef pair<int, int> ci;

int ans, meltCnt = 0;
int N, M;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

bool bfs(){
    meltCnt++;
    for (int i = 0; i < N; ++i) {
        fill(visited[i].begin(), visited[i].end(), false);
    }    
    queue<ci> q;
    q.push(make_pair(0, 0));
    visited[0][0] = true;
    int cheezeCnt = 0;
    while(!q.empty()){
        auto nowPos = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int x = nowPos.first + dx[i];
            int y = nowPos.second + dy[i];
            if(x < 0 || y < 0 || x >= N || y >= M) continue;
            if(visited[x][y]) continue;
            if(cheezeMap[x][y] == 0){
                q.push(make_pair(x, y));
            }
            else{ //치즈가 있다면
                cheezeMap[x][y] = 0;
                cheezeCnt++;
            }
            visited[x][y] = true;
        }
    }
    if(cheezeCnt == 0){ //녹일 치즈가 없음.
        cout << --meltCnt << '\n' << ans;
        return true;
    }

    ans = cheezeCnt; 
    return false;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    cin >> N >> M;

    cheezeMap.resize(N, vector<int>(M));
    visited.resize(N, vector<bool>(M));


    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> cheezeMap[i][j]; 
        }
    }

    while(true){
        if(bfs()) break;
    }
    return 0;
}