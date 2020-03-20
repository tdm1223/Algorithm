// 16509. 장군
// 2019.09.01
// BFS
#include<iostream>
#include<queue>

using namespace std;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int dx2[4][2] = { {-1,-1},{-1,1},{1,1},{-1,1} };
int dy2[4][2] = { {-1,1},{1,1},{-1,1},{-1,-1} };
int visit[11][10];
// 범위를 벗어낫는지 체크하는 함수
bool check(int x, int y)
{
	if (x < 0 || y < 0 || x >= 10 || y >= 9)
	{
		return true;
	}
	return false;
}
int main()
{
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			visit[i][j] = -1;
		}
	}
	queue<pair<int, int>>q;
	q.push({ r1,c1 });
	visit[r1][c1] = 0;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if (x == r2 && y == c2)
		{
			cout << visit[x][y] << endl;
			return 0;
		}
		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			// 범위를 벗어남
			if (check(xx, yy))
			{
				continue;
			}

			// 이동 도중 충돌
			if ((xx == r2) && (yy == c2))
			{
				continue;
			}

			for (int k = 0; k < 2; k++)
			{

				int xxx = xx + dx2[i][k];
				int yyy = yy + dy2[i][k];
				// 범위를 벗어남
				if (check(xxx, yyy))
				{
					continue;
				}

				// 이동 도중 충돌
				if ((xxx == r2) && (yyy == c2))
				{
					continue;
				}

				xxx += dx2[i][k];
				yyy += dy2[i][k];

				// 범위를 벗어남
				if (check(xxx, yyy))
				{
					continue;
				}

				if (visit[xxx][yyy] == -1)
				{
					visit[xxx][yyy] = visit[x][y] + 1;
					q.push({ xxx,yyy });
				}
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
