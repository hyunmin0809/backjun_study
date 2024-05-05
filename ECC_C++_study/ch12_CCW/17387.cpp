#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

typedef pair<long, long> ci;

int CCW(long x1, long y1, long x2, long y2, long x3, long y3){
    long result = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
    if(result > 0){
        return 1;
    }
    else if (result < 0) {
        return -1;
    }
    return 0;
}

bool isOverlab(vector<ci> &vv){
    if(min(vv[0].first, vv[1].first) <= max(vv[2].first, vv[3].first) 
    && min(vv[2].first, vv[3].first) <= max(vv[0].first, vv[1].first)
    && min(vv[0].second, vv[1].second) <= max(vv[2].second, vv[3].second)
    && min(vv[2].second, vv[3].second) <= max(vv[0].second, vv[1].second)){
        return true;
    }
    return false;
}


bool isCross(vector<ci> &vv){
    int abc = CCW(vv[0].first, vv[0].second, vv[1].first, vv[1].second, vv[2].first, vv[2].second);
    int abd = CCW(vv[0].first, vv[0].second, vv[1].first, vv[1].second, vv[3].first, vv[3].second);
    int cda = CCW(vv[2].first, vv[2].second, vv[3].first, vv[3].second, vv[0].first, vv[0].second);
    int cdb = CCW(vv[2].first, vv[2].second, vv[3].first, vv[3].second, vv[1].first, vv[1].second);

    if (abc * abd == 0 && cda * cdb == 0){ // 겹치는 경우
        return isOverlab(vv);
    }
    else if (abc * abd <= 0 && cda * cdb <= 0){ // 선분이 교차하는 경우
        return true;
    }
    return false;
}



int main(){
    vector<ci> point(4);
    cin >> point[0].first >> point[0].second >> point[1].first >> point[1].second >> point[2].first >> point[2].second >> point[3].first >> point[3].second;

    bool cross = isCross(point);

    if(cross) cout << 1;
    else cout << 0;

    return 0;
}