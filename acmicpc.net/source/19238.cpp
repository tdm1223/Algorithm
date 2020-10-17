// 19238. 스타트 택시
// 2020.10.18
// BFS
#include<iostream>
#include<queue>

using namespace std;

int maps[21][21];
int visit[21][21];
int dist[21][21];

struct people
{
    int startX;
    int startY;
    int endX;
    int endY;
    int dis = 987654;
    bool isEnd = false;
};

people peoples[401];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
    int n, m, fuel;
    cin >> n >> m >> fuel;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> maps[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    for (int i = 0; i < m; i++)
    {
        cin >> peoples[i].startX >> peoples[i].startY >> peoples[i].endX >> peoples[i].endY;
    }

    for (int num = 0; num < m; num++)
    {
        for (int i = 0; i < 21; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                visit[i][j] = 0;
                dist[i][j] = 0;
            }
        }

        // 현재 위치에서 가장 가까운 위치를 찾음
        queue<pair<int, int>> q;
        q.push({ x,y });
        for (int j = 0; j < m; j++)
        {
            if (x == peoples[j].startX && y == peoples[j].startY && peoples[j].isEnd == false)
            {
                peoples[j].dis = 0;
            }
        }

        visit[x][y] = 1;
        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int xx = x + dx[i];
                int yy = y + dy[i];

                if (xx <= 0 || yy <= 0 || xx > n || yy > n || maps[xx][yy] == 1)
                {
                    continue;
                }

                if (!visit[xx][yy])
                {
                    visit[xx][yy] = 1;
                    q.push({ xx,yy });
                    dist[xx][yy] = dist[x][y] + 1;
                    for (int j = 0; j < m; j++)
                    {
                        if (xx == peoples[j].startX && yy == peoples[j].startY && peoples[j].isEnd == false)
                        {
                            peoples[j].dis = dist[xx][yy];
                        }
                    }
                }
            }
        }

        // 가장 가까운것을 찾음
        int minDist = 987654321;
        int minPeople = -1; // 가장 가까운 승객의 번호
        for (int i = 0; i < m; i++)
        {
            if (peoples[i].isEnd == true)
            {
                continue;
            }
            if (minDist > peoples[i].dis)
            {
                minDist = peoples[i].dis;
                minPeople = i;
            }
            else if (minDist == peoples[i].dis)
            {
                // 거리가 같다면 행의 번호가 작은것
                if (peoples[minPeople].startX > peoples[i].startX)
                {
                    minPeople = i;
                }
                else if (peoples[minPeople].startX == peoples[i].startX)
                {
                    if (peoples[minPeople].startY > peoples[i].startY)
                    {
                        minPeople = i;
                    }
                }
            }
        }

        // 이동할수 있는 곳이 없음
        if (minDist == 987654)
        {
            fuel = -1;
            break;
        }

        peoples[minPeople].isEnd = true;
        if (peoples[minPeople].startX == peoples[minPeople].endX && peoples[minPeople].startY == peoples[minPeople].endY)
        {
            x = peoples[minPeople].startX;
            y = peoples[minPeople].startY;
            fuel -= minDist;
            continue;
        }
        // 해당 위치로 이동
        if (minDist < fuel)
        {
            x = peoples[minPeople].startX;
            y = peoples[minPeople].startY;
            fuel -= minDist;
        }
        else
        {
            fuel = -1;
            break;
        }

        // 해당 위치에서 도착점까지 거리를 구함
        for (int i = 0; i < 21; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                visit[i][j] = 0;
                dist[i][j] = 0;
            }
        }

        q.push({ x,y });
        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int xx = x + dx[i];
                int yy = y + dy[i];

                if (xx <= 0 || yy <= 0 || xx > n || yy > n || maps[xx][yy] == 1)
                {
                    continue;
                }

                if (!visit[xx][yy])
                {
                    visit[xx][yy] = 1;
                    q.push({ xx,yy });
                    dist[xx][yy] = dist[x][y] + 1;
                }
            }
        }

        // 도착점까지 이동
        if (dist[peoples[minPeople].endX][peoples[minPeople].endY] <= fuel && dist[peoples[minPeople].endX][peoples[minPeople].endY] != 0)
        {
            x = peoples[minPeople].endX;
            y = peoples[minPeople].endY;
            fuel += dist[peoples[minPeople].endX][peoples[minPeople].endY];
        }
        else
        {
            fuel = -1;
            break;
        }
    }
    cout << fuel << endl;
    return 0;
}
