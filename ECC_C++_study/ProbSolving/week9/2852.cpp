#include <iostream>
#include <iomanip> // std::setw와 std::setfill을 사용하기 위해 필요

using namespace std; 


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int goal_1 = 0, goal_2 = 0;
    int time_1 = 48*60, time_2 = 48*60; //계산해서 초로 저장할 예정이다.
    
    int N;
    cin >> N;

    int interval, prevtime = 0;

    
    for(int i = 0 ; i < N; i++){
        int team, minute, sec; 
        char col;

        cin >> team;
        cin >> minute >> col >> sec;

        interval = minute * 60 + sec - prevtime;

        if(goal_1 == goal_2){ //비기고 있는순간
            time_1 -= interval;
            time_2 -= interval;
        }
        else if(goal_1 > goal_2){ // 1팀이 이기고 있다면
            time_2 -= interval;
        }
        else{ // 2팀이 이기고 있다면
            time_1 -= interval;

        }

        prevtime = minute * 60 + sec; 

        if(team == 1) goal_1++;
        else goal_2++;
        
    }

    //마지막 빠져나왔을때.
    interval = 60*48 - prevtime;

    if(goal_1 == goal_2){ //비기고 있는순간
        time_1 -= interval;
        time_2 -= interval;
    }
    else if(goal_1 > goal_2){ // 1팀이 이기고 있다면
        time_2 -= interval;
    }
    else{ // 2팀이 이기고 있다면
        time_1 -= interval;

    }
   

    cout << setfill('0') << setw(2) << time_1 / 60 << ":" 
         << setfill('0') << setw(2) << time_1 % 60 << "\n";
    cout << setfill('0') << setw(2) << time_2 / 60 << ":" 
         << setfill('0') << setw(2) << time_2 % 60 << "\n";

    return 0;
}