// 2638. 치즈
// 2019.06.24
// BFS
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int map[101][101];
int visit[101][101];
int dist[101][101];
int ans;
int n, m;
int dx[4] = { 0,-1,1,0 };
int dy[4] = { 1,0,0,-1 };
vector<pair<int, int>> outline;

bool Check()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 1)
			{
				return true;
			}
		}
	}
	return false;
}

void Init()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			visit[i][j] = 0;
			dist[i][j] = 0;
		}
	}
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

	while (Check())
	{
		Init();
		ans++;
		queue<pair<int, int>> q;
		q.push({ 0,0 });
		visit[0][0] = 1;

		// 치즈가 실내 공기와 맞닿아있는 부분을 저장(outline)
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

				dist[xx][yy]++;
				if (!visit[xx][yy])
				{
					visit[xx][yy]++;
					if (map[xx][yy] == 0)
					{
						q.push({ xx,yy });
					}
					else
					{
						outline.push_back({ xx,yy });
					}
				}
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				// 2변 이상 공기와 접촉했다면 녹아없어진다.
				if (dist[i][j] > 1 && map[i][j] == 1)
				{
					map[i][j] = 0;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
