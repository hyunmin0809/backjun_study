//이것 역시 전형적인 투포인터 문제이다

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &num, int cost){
    int count = 0;

    for(int i = 0; i < num.size() - 1; i++){
        for(int j = i + 1; j < num.size(); j++){
            if(num[i] + num[j] == cost){
                count++;
            }
        }
    }

    return count;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> num (n,0);

    for (int i = 0; i < n; i++){
        cin >> num[i]; 
    }

    int ans = solution(num, m);

    cout << ans;

    return 0;
}