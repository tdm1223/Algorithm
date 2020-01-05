// 8061. Bitmap
// 2019.01.05
// BFS, 영어 문제
#include<iostream>
#include<queue>
#include<string>
#include<vector>

using namespace std;

int ans[201][201];
int visit[201][201];
string map[201];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
vector<pair<int, int>> start;
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> map[i];
	}

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			ans[i][j] = map[i][j] - '0';
			if (ans[i][j] == 1)
			{
				q.push({ i,j });
				start.push_back({ i,j });
				visit[i][j] = 1;
				ans[i][j] = 0;
			}
		}
	}

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

			if (visit[xx][yy] == 0)
			{
				q.push({ xx,yy });
				visit[xx][yy] = 1;
				ans[xx][yy] = ans[x][y] + 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
