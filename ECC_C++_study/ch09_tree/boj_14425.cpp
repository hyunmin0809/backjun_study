#include <iostream>

using namespace std;


class Node{ //트라이 자료 구조 저장용 클래스 
public:
    Node* next[26]; // 26개의 알파벳에 대한 다음 노드를 저장하는 배열
    bool isEnd; // 현재 노드가 문자열의 끝인지를 나타내는 플래그
    
    Node(): isEnd(false){  // 기본 생성자. isEnd를 false로 초기화하고, next 배열을 nullptr로 초기화한다.
        fill(next,next+26,nullptr); // next 배열을 모두 nullptr로 채운다.
    }

    ~Node(){ // 소멸자. 메모리 누수를 막기 위해 동적으로 할당된 자식 노드들을 삭제한다.
        for(auto& child: next) // next 배열의 모든 요소에 대해 반복한다.
        delete child; // 동적으로 할당된 자식 노드를 삭제한다.
    }

    void insert(const char* key){ // 주어진 문자열을 Trie에 삽입하는 함수
        if(*key==0){ // 만약 key가 널문자라면(문자열의 끝에 도달했다면)
            isEnd=true;  // 현재 노드를 문자열의 끝으로 표시한다.
        }
        else{
            int next_index=*key-'a'; // 현재 문자에 대한 인덱스를 계산한다.

            if(next[next_index]==nullptr){ // 다음 노드가 없다면
                next[next_index]=new Node(); // 새로운 노드를 생성하여 할당한다.
            }
            next[next_index]->insert(key+1); // 다음 문자를 삽입하도록 재귀 호출한다.
        }
    }

    Node* find(const char* key){ // Trie에서 주어진 문자열을 찾는 함수
        if(*key==0){ // key가 널문자라면(문자열의 끝에 도달했다면)
            return this; // 현재 노드를 반환한다.
        }
        int next_index=*key-'a'; // 현재 문자에 대한 인덱스를 계산한다.

        if (next[next_index]==nullptr){ // 다음 노드가 없다면
            return nullptr; // nullptr을 반환한다.
        }
        return next[next_index]->find(key+1); // 다음 문자를 찾기 위해 재귀 호출한다.
    }
};


int main() {
  
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    Node* root=new Node();

    while(n>0){
        char text[50];
        cin >> text;
        root -> insert(text);
        n--;
    } 

    int count =0;

    while (m>0){
        char text[501];
        cin >> text;
        Node* result=root -> find(text);

        if(result && result -> isEnd){
            count++;
        }
        m--;
    }

    cout << count << '\n';
  
}

//서적에 있는대로 만든건데 이렇게 짜면 틀린다. 