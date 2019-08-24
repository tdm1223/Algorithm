// 16433. 주디와 당근농장
// 2019.08.24
// BFS
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

char map[101][101];
bool visit[101][101];
int dx[4] = { 1,1,-1,-1 };
int dy[4] = { -1,1,1,-1 };
int main()
{
	int n, r, c;
	cin >> n >> r >> c;

	for (int i = 0; i < 101; i++)
	{
		fill(map[i], map[i] + 101, '.');
	}

	queue<pair<int, int>> q;
	q.push({ r,c });
	map[r][c] = 'v';
	visit[r][c] = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx<1 || yy<1 || xx>n || yy>n)
			{
				continue;
			}

			if (!visit[xx][yy])
			{
				visit[xx][yy] = 1;
				q.push({ xx,yy });
				map[xx][yy] = 'v';
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}
	return 0;
}
