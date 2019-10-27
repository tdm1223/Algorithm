// 1743. 음식물 피하기
// 2019.10.27
// BFS
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int map[101][101];
int visit[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int ans;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 0; i < k; i++)
	{
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (map[i][j] == 1 && !visit[i][j])
			{
				queue<pair<int, int>> q;
				q.push({ i,j });
				visit[i][j] = 1;
				int cnt = 1;
				while (!q.empty())
				{
					int x = q.front().first;
					int y = q.front().second;
					q.pop();
					for (int k = 0; k < 4; k++)
					{
						int xx = x + dx[k];
						int yy = y + dy[k];

						if (xx <= 0 || yy <= 0 || xx > n || yy > m)
						{
							continue;
						}

						if (!visit[xx][yy] && map[xx][yy]==1)
						{
							q.push({ xx,yy });
							cnt++;
							visit[xx][yy] = 1;
						}
					}
				}
				ans = max(ans, cnt);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
