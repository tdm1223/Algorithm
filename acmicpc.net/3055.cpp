// 3055. 탈출
// 2019.05.21
// BFS, 시뮬레이션
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

int water[50][50]; // water[i][j] : i,j까지 물이 퍼지는 시간
int dist[50][50]; // dist[i][j] : i,j까지 비버가 이동하는데 걸리는 시간
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int main()
{
	int r, c;
	cin >> r >> c;
	vector<string> map(r);
	for (int i = 0; i < r; i++)
	{
		cin >> map[i];
	}
	for (int i = 0; i < 50; i++)
	{
		fill(water[i], water[i] + 50, -1);
		fill(dist[i], dist[i] + 50, -1);
	}

	queue<pair<int, int>> q;
	int sx, sy, ex, ey;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (map[i][j] == '*')
			{
				q.push({ i, j });
				water[i][j] = 0;
			}
			else if (map[i][j] == 'S')
			{
				sx = i;
				sy = j;
			}
			else if (map[i][j] == 'D')
			{
				ex = i;
				ey = j;
			}
		}
	}

	// 1. 물을 뿌려준다.
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int xx = x + dx[k];
			int yy = y + dy[k];
			// 범위를 벗어남
			if (xx < 0 || xx >= r || yy < 0 || yy >= c)
			{
				continue;
			}
			// 이미 방문한곳일땐 무시
			if (water[xx][yy] != -1)
			{
				continue;
			}
			// 벽이나 비버굴일땐 무시
			if (map[xx][yy] == 'X' || map[xx][yy]=='D')
			{
				continue;
			}

			water[xx][yy] = water[x][y] + 1;
			q.push({ xx, yy });
		}
	}

	// 2. 비버를 이동시켜준다.
	q.push({ sx, sy });
	dist[sx][sy] = 0;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++)
		{
			int xx = x + dx[k];
			int yy = y + dy[k];
			// 범위를 벗어남
			if (xx < 0 || xx >= r || yy < 0 || yy >= c)
			{
				continue;
			}
			// 이미 방문한곳일땐 무시
			if (dist[xx][yy] != -1)
			{
				continue;
			}
			// 벽일땐 무시
			if (map[xx][yy] == 'X')
			{
				continue;
			}
			// 아직 방문하지 않았으나 물이 먼저 찰 지역은 무시
			if (water[xx][yy] != -1 && dist[x][y] + 1 >= water[xx][yy])
			{
				continue;
			}

			dist[xx][yy] = dist[x][y] + 1;
			q.push({ xx, yy });
		}
	}

	if (dist[ex][ey] == -1)
	{
		cout << "KAKTUS" << endl;
	}
	else
	{
		cout << dist[ex][ey] << endl;
	}
	return 0;
}
