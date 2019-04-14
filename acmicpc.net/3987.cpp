// 3987. 보이저 1호
// 2019.04.14
#include<iostream>

using namespace std;

int n, m;
int r, s;
int xx, yy, dir, ans, ansDir;
int visit[501][501][4];
char map[501][501];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
char out[4] = { 'U', 'R', 'D', 'L' };
bool flag = true;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
		}
	}

	cin >> r >> s;

	// 4가지 방향에 대해 조사
	for (int i = 0; i < 4; ++i)
	{
		if (!flag)
		{
			break;
		}
		// 방향, 시작점 초기화
		dir = i;
		xx = r;
		yy = s;

		int count = 0;
		while (1)
		{
			// 범위를 벗어날때
			if (xx <= 0 || yy <= 0 || xx > n || yy > m)
			{
				break;
			}
			// 블랙홀일때
			if (map[xx][yy] == 'C')
			{
				break;
			}
			// 이미방문한 곳일때
			if (visit[xx][yy][dir])
			{
				flag = false;
				break;
			}
			visit[xx][yy][dir] = 1;

			// 방향전환
			if (map[xx][yy] == '/')
			{
				if (dir == 0 || dir == 2)
				{
					dir++;
				}
				else
				{
					dir--;
				}
			}
			if (map[xx][yy] == '\\')
			{
				if (dir == 0 || dir == 2)
				{
					dir--;
				}
				else
				{
					dir++;
				}

				dir = (dir + 4) % 4;
			}

			count++;
			xx += dx[dir];
			yy += dy[dir];
		}

		if (count > ans)
		{
			ans = count;
			ansDir = i;
		}

		for (int j = 0; j < 501; j++)
		{
			for (int k = 0; k < 501; k++)
			{
				fill(visit[j][k], visit[j][k] + 4, 0);
			}
		}
	}

	cout << out[ansDir] << endl;
	if (!flag)
	{
		cout << "Voyager" << endl;
	}
	else
	{
		cout << ans << endl;
	}
	return 0;
}
