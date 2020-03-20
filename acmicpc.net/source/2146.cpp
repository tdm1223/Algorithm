// 2146. 다리 만들기
// 2019.11.30
// BFS, DFS
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int map[101][101];
int visit[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int tmpMap[101][101];
int ans = 987654321;
void init()
{
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            visit[i][j] = 0;
        }
    }
}
int main()
{
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            tmpMap[i][j] = -1;
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }

    // 섬들의 번호를 지정
    int cnt = 2;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 1)
            {
                tmpMap[i][j] = 0;
                visit[i][j] = 1;
                q.push({ i,j });
                map[i][j] = cnt;
                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for (int k = 0; k < 4; k++)
                    {
                        int xx = x + dx[k];
                        int yy = y + dy[k];
                        if (xx < 0 || yy < 0 || xx >= n || yy >= n)
                        {
                            continue;
                        }

                        if (!visit[xx][yy] && map[xx][yy] != 0)
                        {
                            visit[xx][yy] = 1;
                            q.push({ xx,yy });
                            map[xx][yy] = cnt;
                            tmpMap[xx][yy] = 0;
                        }
                    }
                }
                cnt++;
            }
        }
    }

    // 섬들 순차대로 탐색
    for (int count = 2; count < cnt; count++)
    {
        init();
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (map[j][k] == count)
                {
                    q.push({ j,k });
                    visit[j][k] = 1;
                }
            }
        }

        bool flag = false;
        // 자신과 가장 가까운 섬이 나올때까지 BFS
        while (!q.empty())
        {
            if (flag)
            {
                break;
            }
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int xx = x + dx[i];
                int yy = y + dy[i];
                if (xx < 0 || yy < 0 || xx >= n || yy >= n)
                {
                    continue;
                }

                if (map[xx][yy] != 0 && map[xx][yy] != count)
                {
                    flag = true;
                    ans = min(ans, tmpMap[x][y]);
                    break;
                }
                if (!visit[xx][yy] && tmpMap[xx][yy] == -1)
                {
                    visit[xx][yy] = 1;
                    tmpMap[xx][yy] = tmpMap[x][y] + 1;
                    q.push({ xx,yy });
                }
            }
        }

        // 중간에 종료했다면 큐가 비어있지 않으므로 큐를 비워준다.
        while (!q.empty())
        {
            q.pop();
        }
    }

    cout << ans << endl;
    return 0;
}
