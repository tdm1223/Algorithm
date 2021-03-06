// 1520. 내리막 길
// 2020.10.26
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int a[501][501];
int d[501][501]; // d[i][j] : i,j에 도달하는 경로의 개수
int dx[4] = { 0,0,1,-1 };
int dy[4] = { -1,1,0,0 };
int n, m;

int DFS(int x, int y)
{
    if (d[x][y] != -1) // 이미 존재하는 값이면 return
    {
        return d[x][y];
    }
    if (x < 0 || x >= n || y < 0 || y >= m) // 범위 초과
    {
        return 0;
    }
    if (x == 0 && y == 0) // (0,0)
    {
        return 1;
    }
    d[x][y] = 0;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (a[xx][yy] > a[x][y])
        {
            d[x][y] += DFS(xx, yy);
        }
    }
    return d[x][y];
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            d[i][j] = -1;
        }
    }
    cout << DFS(n - 1, m - 1) << endl;
    return 0;
}
