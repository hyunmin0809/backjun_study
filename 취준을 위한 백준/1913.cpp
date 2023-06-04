#include <iostream>

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, num, cnt = 0, idx = 2; // 1은 미리 넣어두고 2부터 넣기 시작
    cin >> n >> num;

    int map[1000][1000]; // 2차원 벡터로 하려 했는데 어째서인지 잘 되지 않음...
    int y = n / 2, x = n / 2;

    pair<int, int> pos = {y + 1, x + 1}; //찾는 곳 위치, 찾는게 1일 경우를 대비해서 x, y 넣어둬야함

    map[y][x] = 1;

    for (int d = 0; y != -1; d++)
    {           //여기서 d는 꺾은 횟수
        d %= 4; //어차피 4번 꺾으면 초기화됨
        if (d % 2 == 0)
            cnt++; //꺽은 수가 2의 배수일때
        for (int i = 0; i < cnt; i++)
        {
            y += dy[d];
            x += dx[d]; //꺾은수에 따라 상하좌우 각각 나뉘어져서 커짐
            if (y < 0)
                break; //전부 채움
            map[y][x] = idx++;
            if (map[y][x] == num)
                pos = {y + 1, x + 1}; //저기 좌표는 0에서 시작 안함
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << map[i][j] << " ";
        cout << "\n";
    }
    cout << pos.first << " " << pos.second;

    return 0;
}