//그리디 문제다
//먼저 비교한 숫자만큼 더 더해줘야하므로, 작은 것끼리 먼저 묶는 게 편하다. 
//우선 순위 큐로 정렬
//이 문제는 doit 코테 c++ 문제를 보고 참고한 풀이다. 

#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; 

    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;

    int input;
    for(int i = 0; i < n; i++){
        cin >> input;
        pq.push(input);
    }

    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    while(pq.size() != 1){
        num1 = pq.top();
        pq.pop();
        num2 = pq.top();
        pq.pop();
        sum += num1 + num2;
        pq.push(num1 + num2);
    
    }

    cout << sum << "\n";
}