#include <iostream>
#include <vector>
#include <cmath> //min

using namespace std; 

int M, N;
int ans = 9999999;

typedef pair<int, int> ci; //위치 저장용

vector<ci> chicken, house, chosen; 
vector<bool> visited(13, false);

//치킨집 저장, 집 저장용, 남은 치킨용 vector<ci>

int calDistance(){
    //치킨 거리를 구하는 식. 가작 작은 치킨 거리를 구한다. 
    int totalDis = 0;
    for(int i = 0; i < house.size(); i++){
        int dis = 9999999;

        for(int j = 0; j < chosen.size(); j++){
            int temp = abs(house[i].first - chosen[j].first) + abs(house[i].second - chosen[j].second);
            dis = min(dis, temp); 
        }

        totalDis += dis;
    }
    return totalDis;
}

void chicCombination(int idx, int cnt){
    if(cnt == M){
        ans = min(ans, calDistance());
        return;
    }
    
    for (int i = idx; i < chicken.size(); i++){
        if(visited[i]) continue;
        visited[i] = true;
        chosen.push_back(chicken[i]);
        chicCombination(i, cnt + 1);
        chosen.pop_back();
        visited[i] = false;
    }
}

int main(){
 
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int temp;
            cin >> temp;
            if(temp == 1) house.push_back(make_pair(i, j));//house에 pair 넣기
            if(temp == 2) chicken.push_back(make_pair(i, j));//chicken에 pair 넣기 
        }
    }

    chicCombination(0, 0);//combination 돌리기
    cout << ans << "\n";

    return 0;
}