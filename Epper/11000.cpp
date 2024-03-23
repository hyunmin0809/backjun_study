//백준 11000 강의실 배정 문제

#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;
typedef pair<int, int> ci; //시작과 끝을 저장 

int CalCount(int n, vector<ci> lec){
    priority_queue<int, vector<int>, greater<>> pq; //여기엔 종료 시간만 저장
    //순서대로 int : 저장될 요소의 데이터 타입. 
    //vector><int> 내부 구현에 사용되는 컨테이너 타입. priority 큐는 기본적으로 vector 사용
    //greater<> 우선순위를 정한다. 오름차순으로 정렬하겠다는 의미. 
    //가장 작은 요소(가장 빨리 끝나는 강의 종료 시간)가 가장 높은 우선순위를 가지고 큐의 맨 앞에 위치하게 될 것이다.
    
    pq.push(-1); //무조건 작은 음수값 넣음. 어차피 처음 강의에서 대체될 것.

    for(int i = 0; i < n; i++){
        if(lec[i].first >= pq.top()){ 
        //pq.top 에는 종료 시간이 가장 빠른 강의가 저장. 만약 시작 시간이 종료시간과 같거나 느리다면 같은 강의실이 가능
        //위에서 LECTURE을 SORT 해줬기 때문에 무조건 순서대로 저장되어 있다. 
            pq.pop(); //같은 강의실이므로 가장 빠르게 끝나는 시간도 달라짐.
        }
        pq.push(lec[i].second); //기존 or 추가 강의실 정보 갱신
    }
    return pq.size();
}

int main(){
    int n;
    cin >> n; //몇 개의 수업이 있는지 입력 받기

    vector<ci> lec(n, ci(0,0)); //lec의 시작과 끝을 저장
    for(int i = 0; i < n; i++){
        cin >> lec[i].first >> lec[i].second; 
    }

    sort(lec.begin(), lec.end()); 
    //기본적으로 오름차수. lec.first가 같으면 lec.second 비교해서 정렬해준다
    
    cout << CalCount(n, lec);
    return 0;
}