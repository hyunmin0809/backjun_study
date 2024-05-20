#include <iostream>
#include <vector>
#include <algorithm> //for sort

using namespace std;

vector<int> maxComputer; //해킹할 수 있는 컴퓨터가 가장 많은 컴퓨터를 저장하는 벡터.
vector<bool> visited; //다녀왔는지.
vector<vector <int>> computer; //여기에 컴퓨터와, 그 컴퓨터를 신뢰하는 컴퓨터의 배열이 저장된다.
int cnt = 0;

void bfs(int start){
    visited[start] = true;
    cnt++;
    
    for(int i = 0; i < computer[start].size(); i++){
        int next = computer[start][i];
        if(!visited[next]) //만약 visit을 하지 않았따면
        {
            bfs(next);
        }
    }

}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    //vector
    int N, M; //N:컴퓨터 개수 M: 밑에 나열될 줄
    int max = -1;

    cin >> N >> M; 

    computer.resize(N+1);
    visited.resize(N+1, false);

    while(M--){
        int A, B;
        cin >> A >> B;
        computer[B].push_back(A); //B를 신뢰하는 컴퓨터 A
    }

    for(int i = 1; i < computer.size(); i++){
        fill(visited.begin(), visited.end(), false); //visit false로 초기화
        cnt = 0;//cnt 초기화
        
        bfs(i);
    
        if(max < cnt){ //만약 컴퓨터 i가 제일 해킹할 게 많다면
            maxComputer.clear();
            maxComputer.push_back(i);
            max = cnt;
        }
        else if(max == cnt){
            maxComputer.push_back(i);
        }
    }
    
    sort(maxComputer.begin(), maxComputer.end());

    for (auto iter : maxComputer) {
		cout << iter << " ";
	}

    return 0;
}