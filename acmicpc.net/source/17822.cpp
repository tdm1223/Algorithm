// 17822. 원판 돌리기
// 2020.10.21
// 시뮬레이션, 구현, BFS
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int disk[51][51];
int tmp[51];
int n, m, t;
int visit[51][51];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

// 원판을 체크하며 인접한 같은 수를 제거하는 함수
void check()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            visit[i][j] = 0;
        }
    }
    queue<pair<int, int>> q;
    bool flag = 0; // 바뀐게 있는지 체크하는 변수
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // 방문하지 않았고 디스크의 값이 0이 아닐때
            if (!visit[i][j] && disk[i][j] != 0)
            {
                int val = disk[i][j]; // val과 같은 값을 모두 지워줌(0으로 만듦)
                q.push({ i,j });
                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int xx = x + dx[i];
                        int yy = y + dy[i];

                        // 행은 맨뒤와 맨앞이 연결되어있지 않음
                        if (xx <= 0)
                        {
                            continue;
                        }
                        if (xx > n)
                        {
                            continue;
                        }
                        // 열은 맨뒤와 맨앞이 연결되어있기에 값 조정
                        if (yy <= 0)
                        {
                            yy = m;
                        }
                        if (yy > m)
                        {
                            yy = 1;
                        }

                        if (disk[xx][yy] == val && !visit[xx][yy])
                        {
                            flag = 1;
                            disk[x][y] = 0;
                            q.push({ xx, yy });
                            visit[xx][yy] = 1;
                            disk[xx][yy] = 0;
                        }
                    }
                }
            }
        }
    }

    // 바뀐게 없다면
    if (!flag)
    {
        int sum = 0;
        int cnt = 0;
        // 평균을 구하기 위해 sum,cnt구함
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (disk[i][j] != 0)
                {
                    sum += disk[i][j];
                    cnt++;
                }
            }
        }
        // 모두 0이면 의미없음
        if (cnt == 0)
        {
            return;
        }
        float avg = (float)sum / cnt;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (disk[i][j] != 0)
                {
                    if (disk[i][j] < avg)
                    {
                        disk[i][j]++;
                    }
                    else if (disk[i][j] > avg)
                    {
                        disk[i][j]--;
                    }
                }
            }
        }
    }
}

/*
    원판을 회전시키는 함수
    dir : 회전 방향(0 : 시계, 1 : 반시계)
    num : 회전하는 원판 번호
    count : 회전 수
 */
void rotate(int dir, int count, int num)
{
    if (dir == 0)
    {
        int start = m - count + 1;
        for (int i = 1; i <= m; i++)
        {
            int k = start % m == 0 ? m : start % m;
            tmp[i] = disk[num][k];
            start++;
        }
    }
    else if (dir == 1)
    {
        int start = count;
        for (int i = 1; i <= m; i++)
        {
            tmp[i] = disk[num][(start++) % m + 1];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        disk[num][i] = tmp[i];
    }
}

int main()
{

    cin >> n >> m >> t;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> disk[i][j];
        }
    }

    for (int i = 0; i < t; i++)
    {
        int x, d, k;
        cin >> x >> d >> k;
        for (int j = x; j <= n; j += x)
        {
            rotate(d, k, j);
        }
        check();
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ans += disk[i][j];
        }
    }
    cout << ans << endl;
    return 0;
}
