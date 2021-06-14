// 14442. 벽 부수고 이동하기 2
// 2021.06.14
// BFS
#include<iostream>
#include<queue>

using namespace std;
int map[1001][1001];
int dist[1001][1001][11];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

struct info
{
    int x;
    int y;
    int count;
};

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }

    queue<info> q;
    dist[0][0][0] = 1;
    q.push({ 0, 0, 0 });
    while (!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        int count = q.front().count;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];

            if (xx < 0 || xx >= n || yy < 0 || yy >= m)
            {
                continue;
            }

            // 벽을 부수지 않고 이동
            if (map[xx][yy] == 0 && dist[xx][yy][count] == 0)
            {
                dist[xx][yy][count] = dist[x][y][count] + 1;
                q.push({ xx, yy, count });
            }

            // 벽을 부수고 이동
            if (map[xx][yy] == 1 && dist[xx][yy][count + 1] == 0 && count < k)
            {
                dist[xx][yy][count + 1] = dist[x][y][count] + 1;
                q.push({ xx, yy, count + 1 });
            }
        }
    }

    // 결과 출력
    int ans = 987654321;
    for (int i = 0; i <= k; i++)
    {
        if (dist[n - 1][m - 1][i] != 0 && dist[n - 1][m - 1][i] < ans)
        {
            ans = dist[n - 1][m - 1][i];
        }
    }

    if (ans == 987654321)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}
