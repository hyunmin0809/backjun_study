#include <iostream>
#include <vector>

using namespace std;
const int SIZE = 1e4; //=10^3/스택 사이즈

vector<int> stack_vec(SIZE);
int top_pointer = -1; //스택의 현재 위치 가리킴

void push(int x)
{
    stack_vec[++top_pointer] = x;
}

void pop()
{
    top_pointer--;
}

int size()
{
    return top_pointer + 1;
}

bool full()
{
    return top_pointer == (SIZE - 1);
}

bool empty()
{
    return top_pointer == -1;
}

int top()
{
    return stack_vec[top_pointer];
}

int main()
{
    int n, x;
    string cmd; //명령 문자열

    cin >> n;
    while (n--)
    { // n다시 쓸일 ㅇ벗으므로
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
                cout << top() << "\n";
                pop();
            }
            continue;
        }
        if (cmd == "size")
        {
            cout << size() << '\n';
            continue;
        }
        if (cmd == "empty")
        {
            cout << empty() << '\n';
            continue;
        }
        if (cmd == "top")
        {
            if (empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << top() << "\n";
            }
        }
    }

    return 0;
}