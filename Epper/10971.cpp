//백준 10971.cpp 외판원 순회 2 에 대한 문제이다.


#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> matrix;
vector<bool> visited; 

const int INF = 1e8;

int ans = INF;

void backtracking(int n, int cnt, int curCity, int cost){
    if(cost >= ans){
        return;
    }
    if(n == cnt){
        if(matrix[curCity][0] != 0){
            ans = min(ans, cost + matrix[curCity][0]);
        }

        return;
    }

    for(int i = 0; i < n; i++){
        if(matrix[curCity][i] != 0 && !visited[i]){
            visited[i] = true;
            backtracking(n, cnt + 1, i, cost + matrix[curCity][i]);
            visited[i] = false;
        }
    }

}

int solution(int n, vector<vector<int>> &cost){
    matrix = cost;
    visited[0] = true;

    backtracking(n, 1, 0, 0);

    return ans;
}

int main(){
    int n;
    cin >>n;

    vector<vector<int>> cost(n, vector<int>(n,0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> cost[i][j];
        }
    }

    visited.assign(n, false);

    int answer = solution(n, cost);

    cout << answer;
    return 0;

}





/*
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


#include <iostream>
#include <vector>

using namespace std;
// 사라질 최대값
const int INF = 1e8;

//방문 검사 배열
vector<bool> visited;
//비용 행렬
vector<vector<int>> matrix;
//ans에 최소 비용 저장 
int ans = INF;

void backtracking(int n, int cnt, int cur_city, int cost) //파라미터 직접 입력
{
    //만약 비용이 ans보다 크다면 
    if(cost >= ans){
        //리턴 (이 길은 쓸모 없는 길)
        return;
    }
    //만약 cnt == n 모두 돌았다면
    if(cnt == n){
        //출발 도시(0)으로 돌아올 수 있는지 확인
        if(matrix[cur_city][0] != 0){
            ans = min(ans, cost + matrix[cur_city][0]);
        } 
        return;
    //리턴 
    }
    //반복문 모든 도시를 살펴볼때까지 
    for(int i = 0; i < n; i++){
        //만약 현재 도시에서 i도시까지 갈 수 있느 길이 있고, 그 도시가 방문 X일때
        if(matrix[cur_city][i] && !visited[i]){
            //다녀옴
            visited[i] = true;
            //재귀
            backtracking(n, cnt+1, i, cost + matrix[cur_city][i]);
            //안 다녀옴 //위에서 return 되고 취소 됐다는 뜻. 
            visited[i] = false;
        }
    }
}

int solution (vector<vector<int>> &cost, int n) //파라미터 직접 입력
{
    //visit 다 false 처리
    visited.assign(n, false);
    //가격 입력받고
    matrix = cost;

    //출발 위치는 다녀왔다고 표시 (0)
    visited[0] = true;

    //백트래킹 시작
    backtracking(n, 1, 0, 0); //1이다. 주의.

    //ans 리턴
    return ans;
}

int main(){
    //n
    int n;
    //cost 벡터
    vector<vector<int>> cost;
    //answer
    int answer;

    //n 입력 받고
    cin >> n;
    //cost 선언  (굳이 assign 할 필요가...?)
    cost.assign(n, vector<int>(n, 0));
    //for 문 돌려서 cost 받아오기
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            cin >> cost[i][j];
        }
    }

    answer = solution(cost, n); 

    cout << answer;


    return 0;
}

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> matrix;
vector<bool> visited;

int ans = 1e8;

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
            visited[i] =true;
            backtracking(n, cnt+1, i, cost + matrix[cur_city][i]);
            visited[i] = false;
        }
    }
}

int solution(int n, vector<vector<int>> &cost) {
    visited.assign(n, false);
   
    matrix = cost;
    
    visited[0] = true;
    
    backtracking(n, 1, 0, 0);
     
    return ans;
}

int main(){
    int n; 
    cin >> n;
    
    int answer; 
    
    vector<vector<int>> cost(n, vector<int> (n,0));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j< n; j++){
            cin >> cost[i][j];
        }
    }
    
    answer = solution(n, cost);
    
    cout << answer;
    
    return 0;
}
*/


