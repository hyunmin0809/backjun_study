//백준 10971.cpp 외판원 순회 2 에 대한 문제이다.

#include <iostream>
#include <vector>

using namespace std;
const int INF = 1e8; //무조건 크니까 사라질 값

vector<bool> visited; //방문검사배열
vector<vector<int>> matrix; //비용 행렬
int ans = INF; //죄소 비용 저장을 위해 미리 최댓값으로 초기화

void backtracking(int n, int cnt, int cur_city, int cost){
    if(cost >= ans){
        return;
    }

    if(cnt == n){
        if(matrix[cur_city][0] != 0){
            ans = min(ans, cost + matrix[cur_city][0]);
        }
        return;
    }
    for(int i = 0; i<n; i++){
        if(matrix[cur_city][i] && !visited[i]){
            visited[i] = true;
            backtracking(n, cnt + 1, i, cost + matrix[cur_city][i]);
            visited[i] = false; //false 처리 하는 이유. bactracking return 되면 또 새로운 값 구함. => false 처리해줘서 없던 일 함
        }
    }
}

int solution(const int n, const vector<vector<int>>& cost){
    visited.assign(n,false);
    matrix = cost; //이렇게 따로 matrix 만들어주는 이유는 cost가 포인터 값으로 받아와야하기 때문.

    visited[0] = true;
    backtracking(n, 1, 0, 0);
    return ans;
}

int main() {
    int n; 
    vector<vector<int>> cost;
    int answer;

    cin >> n;
    cost.assign(n, vector<int>(n,0));
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> cost[i][j];
        }
    }

    answer = solution(n, cost);

    cout << answer;

    return 0;

}