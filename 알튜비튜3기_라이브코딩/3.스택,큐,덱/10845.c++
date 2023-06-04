#include <iostream>
#include <vector>

using namespace std;
const int SIZE = 1e4 + 1; // 1번 인덱스부터 값이 들어감

vector<int> queue_vec(SIZE);
int front_pointer = 0, rear_pointer = 0;

void push(int x)
{
    rear_pointer = (rear_pointer + 1) % SIZE; //모듈러 연산을 하는게 좋다
    queue_vec[rear_pointer] = x;
}

void pop()
{
    front_pointer = (front_pointer + 1) % SIZE;
}

int size()
{
    int tmp = rear_pointer - front_pointer;
    if (tmp < 0)
    {
        tmp += SIZE;
    }
    return tmp;
}

bool empty()
{
    return rear_pointer == front_pointer;
}

bool full()
{
    return (rear_pointer + 1) % SIZE == front_pointer;
}

int front()
{
    return queue_vec[(front_pointer + 1) % SIZE];
}

int back()
{
    return queue_vec[rear_pointer];
}

int main()
{
    int n, x;
    string cmd;

    cin >> n;
    while (n--)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            cin >> x;
            if (!full())
            {
                push(x);
            }
            continue;
        }
        if (cmd == "pop")
        {
            if (empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << front() << "\n";
                pop();
            }
        }
        if (cmd == "size")
        {
            cout << size() << "\n";
            continue;
        }
        if (cmd == "empty")
        {
            cout << empty() << "\n";
            continue;
        }
        if (cmd == "front")
        {
            if (empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << front() << "\n";
            }
            continue;
        }
        if (cmd == "back")
        {
            if (empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << back() << "\n";
            }
        }
    }
    return 0;
}