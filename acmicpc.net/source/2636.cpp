// 2636. 치즈
// 2019.05.20
// BFS
#include<iostream>
#include<queue>

using namespace std;

int map[101][101];
int visit[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
void Init()
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			visit[i][j] = 0;
		}
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1)
			{
				cnt++;
			}
		}
	}

	int ans = 0;
	while (1)
	{
		Init();
		queue<pair<int, int>> q;
		q.push({ 0,0 });
		visit[0][0] = 1;
		map[0][0] = 3;
		int tmp = cnt;
		while (!q.empty())
		{
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			for (int i = 0; i < 4; i++)
			{
				int xx = x + dx[i];
				int yy = y + dy[i];
				if (xx < 0 || yy < 0 || xx >= n || y >= m)
				{
					continue;
				}

				if (map[xx][yy] == 0 || map[xx][yy]==3)
				{
					if (!visit[xx][yy])
					{
						map[xx][yy] = 3;
						visit[xx][yy] = 1;
						q.push({ xx, yy });
					}
				}
			}
		}

		vector<pair<int, int>> v;
		// 공기에 노출된 치즈는 2로
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				// 치즈일 때
				if (map[i][j] == 1)
				{
					int x = i;
					int y = j;
					for (int k = 0; k < 4; k++)
					{
						int xx = x + dx[k];
						int yy = y + dy[k];

						if (xx < 0 || yy < 0 || xx >= n || y >= m)
						{
							continue;
						}

						if (map[xx][yy] == 3)
						{
							v.push_back({ x,y });
							break;
						}
					}
				}
			}
		}
		for (int i = 0; i < v.size(); i++)
		{
			map[v[i].first][v[i].second] = 3;
			cnt--;
		}
		ans++;
		if (cnt <= 0)
		{
			cout << ans << " " << tmp << endl;
			break;
		}
	}
	return 0;
}
