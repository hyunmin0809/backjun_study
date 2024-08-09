#include<iostream>
#include<deque>
#include<string>

using namespace std;

deque<int> dq;

enum Command {
    PUSH_FRONT,
    PUSH_BACK,
    POP_FRONT,
    POP_BACK,
    SIZE,
    EMPTY,
    FRONT,
    BACK,
    INVALID
};

Command hashCommand(string command){
    if (command == "push_front") return PUSH_FRONT;
    if (command == "push_back") return PUSH_BACK;
    if (command == "pop_front") return POP_FRONT;
    if (command == "pop_back") return POP_BACK;
    if (command == "size") return SIZE;
    if (command == "empty") return EMPTY;
    if (command == "front") return FRONT;
    if (command == "back") return BACK;
}

void solution(string str){
    switch(hashCommand(str)){
        case PUSH_FRONT: {
                int X;
                cin >> X;
                dq.push_front(X);
                break;
            }
        case PUSH_BACK: {
            int X;
            cin >> X;
            dq.push_back(X);
            break;
        }
        case POP_FRONT: {
            if (dq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            break;
        }
        case POP_BACK: {
            if (dq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            break;
        }
        case SIZE: {
            cout << dq.size() << "\n";
            break;
        }
        case EMPTY: {
            cout << (dq.empty() ? 1 : 0) << "\n";
            break;
        }
        case FRONT: {
            if (dq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << dq.front() << "\n";
            }
            break;
        }
        case BACK: {
            if (dq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << dq.back() << "\n";
            }
            break;
        }
    }
}



int main(){
    int N;

    cin >> N;

    while(N--){
        string str;
        cin >> str;
        solution(str);
    }

    return 0;
}