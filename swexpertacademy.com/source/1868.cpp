// 1868. 파핑파핑 지뢰찾기
// 2019.07.16
#include<iostream>

using namespace std;

int t, n, ans;
int visit[301][301];
// 8방향 조사
int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
int dy[8] = { 1,1,0,-1,-1,-1,0,1 };
char map[301][301];
void dfs(int x, int y)
{
	if (visit[x][y])
	{
		visit[x][y] = -1;
	}
	else
	{
		visit[x][y] = -1;
		for (int i = 0; i < 8; i++)
		{
			// 범위 안이면서 지뢰가 아닐때
			if (x + dx[i] >= 0 && x + dx[i] < n
				&& y + dy[i] >= 0 && y + dy[i] < n
				&& visit[x + dx[i]][y + dy[i]] != -1)
			{
				dfs(x + dx[i], y + dy[i]);
			}
		}
	}
}
int main()
{
	int cnt;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%1s", &map[i][j]);
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				// 지뢰가 아닌 땅일때
				if (map[i][j] == '.')
				{
					cnt = 0;
					for (int k = 0; k < 8; k++)
					{
						// 8방향 범위에 지뢰가 있다면 cnt를 1로 만들고 break
						if (i + dx[k] >= 0 && i + dx[k] < n
							&& j + dy[k] >= 0 && j + dy[k] < n
							&& map[i + dx[k]][j + dy[k]] == '*')
						{
							cnt++;
							break;
						}
					}
					visit[i][j] = cnt;
				}
				// 지뢰일땐 -1
				else
				{
					visit[i][j] = -1;
				}
			}
		}

		ans = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				// 0인 땅 -> 퍼져야함
				if (!visit[i][j])
				{
					ans++;
					dfs(i, j);
				}
			}
		}
		// 잔처리
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (visit[i][j] != -1)
				{
					ans++;
				}
			}
		}
		printf("#%d %d\n", testCase, ans);
	}
	return 0;
}
