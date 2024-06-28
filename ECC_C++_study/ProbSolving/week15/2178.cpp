#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int bfs(vector<vector<int>>& maze, int N, int M){
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    vector<vector<bool>> visited(N, vector<bool>(M, false));
    vector<vector<int>> distance(N, vector<int>(M,0));

    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;
    distance[0][0] = 1;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
        
            if(nx >= 0 && ny >= 0 && nx < N && ny < M && maze[nx][ny] == 1 && !visited[nx][ny]){
                q.push({nx, ny});
                visited[nx][ny] = true;
                distance[nx][ny] = distance[x][y] + 1;
                
                // 도착점에 도달한 경우
                if (nx == N-1 && ny == M-1) {
                    return distance[nx][ny];
                }
            }
        }
    }
    return -1;  // 도착점에 도달할 수 없는 경우
}

int main(){
    int N, M;
    cin >> N >> M;

    vector<vector<int>> maze(N, vector<int>(M));

    for(int i = 0; i < N; i++){
        string str;
        cin >> str;
        for(int j = 0; j < M; j++){
            maze[i][j] = str[j]  - '0';
        }
    }

    int  result = bfs(maze, N, M);
    cout << result << "\n";

    return 0;
}