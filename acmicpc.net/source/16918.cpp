// 16918. 봄버맨
// 2020.06.05
// 시뮬레이션
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

char map[201][201];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
    int r, c, n;
    queue<pair<int, int>> q;
    cin >> r >> c >> n;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> map[i][j];
        }
    }
    // 1초후일땐 따로 처리
    if (n == 1)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << map[i][j];
            }
            cout << endl;
        }
        return 0;
    }
    // 2초 이상
    else
    {
        for (int cnt = 2; cnt <= n; cnt++)
        {
            // 짝수일때는 O으로 덮음
            if (cnt % 2 == 0)
            {
                for (int x = 0; x < r; x++)
                {
                    for (int y = 0; y < c; y++)
                    {
                        if (map[x][y] == 'O')
                        {
                            q.push({ x,y });
                        }
                        else
                        {
                            map[x][y] = 'O';
                        }
                    }
                }
            }
            // 홀수일땐 폭탄 폭발
            else
            {
                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    // 상하좌우 4방향과 자기자신을 .으로 바꿈
                    map[x][y] = '.';
                    for (int i = 0; i < 4; i++)
                    {
                        int xx = x + dx[i];
                        int yy = y + dy[i];
                        if (x < 0 || y < 0 || x >= r || y >= c)
                        {
                            continue;
                        }
                        map[xx][yy] = '.';
                    }
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
    return 0;
}
