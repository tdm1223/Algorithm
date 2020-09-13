// 1261. 알고스팟
// 2020.09.13
// 다익스트라 알고리즘
#include<iostream>
#include<queue>

using namespace std;

int map[101][101];
int visit[101][101];
int dist[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }
    deque<pair<int, int>> dq;
    dq.push_back({ 1,1 });
    visit[1][1] = 1;
    while (!dq.empty())
    {
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();

        for (int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];

            if (xx<1 || yy<1 || xx>m || yy>n)
            {
                continue;
            }

            if (!visit[xx][yy])
            {
                visit[xx][yy] = 1;
                // 벽을 뚫고 가는 경우엔 뒤에 넣어줌
                if (map[xx][yy] == 1)
                {
                    dq.push_back({ xx,yy });
                    dist[xx][yy] = dist[x][y] + 1;
                }
                // 벽을 뚫지 않을 경우엔 앞에 넣어줌
                else
                {
                    dq.push_front({ xx,yy });
                    dist[xx][yy] = dist[x][y];
                }
            }
        }
    }

    cout << dist[m][n] << endl;
    return 0;
}
