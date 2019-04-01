// 15683. 감시
// 2019.04.01
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m;
int map[9][9];
// 우 하 좌 상
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
struct cctv
{
	int x; // x위치
	int y; // y위치
	int type; // cctv 종류
};
vector<cctv> cctvs;
deque<pair<int, int>> q;
int ans = 987654321;
void go(int cnt)
{
	// 최솟값인 0이 나온다면 더할필요 없음
	if (ans == 0)
	{
		return;
	}

	//cctv를 모두 배치하고 사각지대의 크기를 구함
	if (cnt == cctvs.size())
	{
		int res = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (map[i][j] == 0)
				{
					res++;
				}
			}
		}
		ans = min(ans, res);
		return;
	}
	else
	{
		int x = cctvs[cnt].x;
		int y = cctvs[cnt].y;
		switch (cctvs[cnt].type)
		{
		case 1: // 한쪽 방향
			for (int i = 0; i < 4; i++)
			{
				int mul = 1;
				int tmp = 0;
				while (true)
				{
					int xx = x + dx[i] * mul;
					int yy = y + dy[i] * mul;
					mul++;
					// 범위 벗어나면 중지
					if (xx <= 0 || yy <= 0 || xx > n || yy > m)
					{
						break;
					}
					// 벽 무시
					if (map[xx][yy] == 6)
					{
						break;
					}

					if (map[xx][yy] == 0)
					{
						map[xx][yy] = 7;
						q.push_back({ xx,yy });
						tmp++;
					}
				}
				go(cnt + 1);
				for (int i = 0; i < tmp; i++)
				{
					int x = q.back().first;
					int y = q.back().second;
					q.pop_back();
					map[x][y] = 0;
				}
			}
			break;
		case 2: // 좌우, 상하 방향
			for (int i = 0; i < 2; i++)
			{
				int mul = 1;
				int tmp = 0;
				while (true)
				{
					int xx = x + dx[i] * mul;
					int yy = y + dy[i] * mul;
					mul++;
					// 범위 벗어나면 중지
					if (xx <= 0 || yy <= 0 || xx > n || yy > m)
					{
						break;
					}
					// 벽 무시
					if (map[xx][yy] == 6)
					{
						break;
					}

					if (map[xx][yy] == 0)
					{
						map[xx][yy] = 7;
						q.push_back({ xx,yy });
						tmp++;
					}
				}

				mul = 1;
				while (true)
				{
					int xx = x + dx[i + 2] * mul;
					int yy = y + dy[i + 2] * mul;
					mul++;
					// 범위 벗어나면 중지
					if (xx <= 0 || yy <= 0 || xx > n || yy > m)
					{
						break;
					}
					// 벽 무시
					if (map[xx][yy] == 6)
					{
						break;
					}

					if (map[xx][yy] == 0)
					{
						map[xx][yy] = 7;
						q.push_back({ xx,yy });
						tmp++;
					}
				}
				go(cnt + 1);
				for (int i = 0; i < tmp; i++)
				{
					int x = q.back().first;
					int y = q.back().second;
					q.pop_back();
					map[x][y] = 0;
				}
			}
			break;
		case 3:
			for (int i = 0; i < 4; i++)
			{
				int mul = 1;
				int tmp = 0;
				while (true)
				{
					int xx = x + dx[i] * mul;
					int yy = y + dy[i] * mul;
					mul++;
					// 범위 벗어나면 중지
					if (xx <= 0 || yy <= 0 || xx > n || yy > m)
					{
						break;
					}
					// 벽 무시
					if (map[xx][yy] == 6)
					{
						break;
					}

					if (map[xx][yy] == 0)
					{
						map[xx][yy] = 7;
						q.push_back({ xx,yy });
						tmp++;
					}
				}

				mul = 1;
				while (true)
				{
					int xx = x + dx[(i + 1) % 4] * mul;
					int yy = y + dy[(i + 1) % 4] * mul;
					mul++;
					// 범위 벗어나면 중지
					if (xx <= 0 || yy <= 0 || xx > n || yy > m)
					{
						break;
					}
					// 벽 무시
					if (map[xx][yy] == 6)
					{
						break;
					}

					if (map[xx][yy] == 0)
					{
						map[xx][yy] = 7;
						q.push_back({ xx,yy });
						tmp++;
					}
				}
				go(cnt + 1);
				for (int i = 0; i < tmp; i++)
				{
					int x = q.back().first;
					int y = q.back().second;
					q.pop_back();
					map[x][y] = 0;
				}
			}
			break;
		case 4:
			for (int i = 0; i < 4; i++)
			{
				int mul = 1;
				int tmp = 0;
				while (true)
				{
					int xx = x + dx[i] * mul;
					int yy = y + dy[i] * mul;
					mul++;
					// 범위 벗어나면 중지
					if (xx <= 0 || yy <= 0 || xx > n || yy > m)
					{
						break;
					}
					// 벽 무시
					if (map[xx][yy] == 6)
					{
						break;
					}

					if (map[xx][yy] == 0)
					{
						map[xx][yy] = 7;
						q.push_back({ xx,yy });
						tmp++;
					}
				}

				mul = 1;
				while (true)
				{
					int xx = x + dx[(i + 1) % 4] * mul;
					int yy = y + dy[(i + 1) % 4] * mul;
					mul++;
					// 범위 벗어나면 중지
					if (xx <= 0 || yy <= 0 || xx > n || yy > m)
					{
						break;
					}
					// 벽 무시
					if (map[xx][yy] == 6)
					{
						break;
					}

					if (map[xx][yy] == 0)
					{
						map[xx][yy] = 7;
						q.push_back({ xx,yy });
						tmp++;
					}
				}

				mul = 1;
				while (true)
				{
					int xx = x + dx[(i + 2) % 4] * mul;
					int yy = y + dy[(i + 2) % 4] * mul;
					mul++;
					// 범위 벗어나면 중지
					if (xx <= 0 || yy <= 0 || xx > n || yy > m)
					{
						break;
					}
					// 벽 무시
					if (map[xx][yy] == 6)
					{
						break;
					}

					if (map[xx][yy] == 0)
					{
						map[xx][yy] = 7;
						q.push_back({ xx,yy });
						tmp++;
					}
				}

				go(cnt + 1);
				for (int i = 0; i < tmp; i++)
				{
					int x = q.back().first;
					int y = q.back().second;
					q.pop_back();
					map[x][y] = 0;
				}
			}
			break;
		case 5:
			int tmp = 0;

			int mul = 1;
			while (true)
			{
				int xx = x + dx[0] * mul;
				int yy = y + dy[0] * mul;
				mul++;
				// 범위 벗어나면 중지
				if (xx <= 0 || yy <= 0 || xx > n || yy > m)
				{
					break;
				}
				// 벽 무시
				if (map[xx][yy] == 6)
				{
					break;
				}

				if (map[xx][yy] == 0)
				{
					map[xx][yy] = 7;
					q.push_back({ xx,yy });
					tmp++;
				}
			}

			mul = 1;
			while (true)
			{
				int xx = x + dx[1] * mul;
				int yy = y + dy[1] * mul;
				mul++;
				// 범위 벗어나면 중지
				if (xx <= 0 || yy <= 0 || xx > n || yy > m)
				{
					break;
				}
				// 벽 무시
				if (map[xx][yy] == 6)
				{
					break;
				}

				if (map[xx][yy] == 0)
				{
					map[xx][yy] = 7;
					q.push_back({ xx,yy });
					tmp++;
				}
			}

			mul = 1;
			while (true)
			{
				int xx = x + dx[2] * mul;
				int yy = y + dy[2] * mul;
				mul++;
				// 범위 벗어나면 중지
				if (xx <= 0 || yy <= 0 || xx > n || yy > m)
				{
					break;
				}
				// 벽 무시
				if (map[xx][yy] == 6)
				{
					break;
				}

				if (map[xx][yy] == 0)
				{
					map[xx][yy] = 7;
					q.push_back({ xx,yy });
					tmp++;
				}
			}

			mul = 1;
			while (true)
			{
				int xx = x + dx[3] * mul;
				int yy = y + dy[3] * mul;
				mul++;
				// 범위 벗어나면 중지
				if (xx <= 0 || yy <= 0 || xx > n || yy > m)
				{
					break;
				}
				// 벽 무시
				if (map[xx][yy] == 6)
				{
					break;
				}

				if (map[xx][yy] == 0)
				{
					map[xx][yy] = 7;
					q.push_back({ xx,yy });
					tmp++;
				}
			}

			go(cnt + 1);
			for (int i = 0; i < tmp; i++)
			{
				int x = q.back().first;
				int y = q.back().second;
				q.pop_back();
				map[x][y] = 0;
			}

		}
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] > 0 && map[i][j] < 6)
			{
				cctvs.push_back({ i,j,map[i][j] });
			}
		}
	}

	go(0);
	cout << ans << endl;
	return 0;
}
