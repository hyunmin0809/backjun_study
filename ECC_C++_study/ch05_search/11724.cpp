//do it! c++ 코테 스터디 참고

#include <iostream>
#include <vector>

using namespace std;

static vector<vector <int>> graph;
static vector<bool> visited;

void DFS(int v){
    if(visited[v]){
        return;
    }

    visited[v] = true;

    for(int i : graph[v]){
        if(visited[i] == false){
            DFS(i);
        }
    } 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    
    graph.resize(N + 1);
    
    visited = vector<bool>(N+1, false);

    for(int i = 0; i < M; i++){
        int start, end;
        cin >> start >> end;
        graph[start].push_back(end);
        graph[end].push_back(start);
    }

    int count = 0; 

    for(int i = 1; i < N+1; i++){
        if(!visited[i]){
            count++;
            DFS(i);
        }
    }
    cout << count << "\n";
}