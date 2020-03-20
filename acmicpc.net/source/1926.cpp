// 1926. 그림
// 2019.05.19
// 플러드필
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int map[501][501];
int visit[501][501];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int n, m;

// BFS로 그림의 넓이를 구함.
int BFS(int x, int y)
{
	queue<pair<int, int>> q;
	q.push({ x,y });
	int cnt = 1;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx < 0 || yy < 0 || xx >= n || yy >= m)
			{
				continue;
			}

			if (!visit[xx][yy] && map[xx][yy] == 1)
			{
				visit[xx][yy] = 1;
				q.push({ xx,yy });
				cnt++;
			}
		}
	}
	return cnt;
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visit[i][j] && map[i][j] == 1)
			{
				visit[i][j] = 1;
        // BFS로 구한 넓이와 기존의 넓이중 큰 값을 ans로 저장
				ans = max(ans, BFS(i, j));
        // 그림의 갯수 +1
				cnt++;
			}
		}
	}
	cout << cnt << endl << ans << endl;
	return 0;
}
