// 14890. 경사로
// 2019.04.02
#include<iostream>

using namespace std;

int map[101][101];
int used[101]; // 경사로를 세울때 그 칸을 사용했는지 유무를 저장

void initused()
{
	fill(used, used + 101, 0);
}

int main()
{
	int n, k;
	cin >> n >> k;
	int ans = n * 2;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}

	// 가로
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		initused();
		for (int j = 1; j < n; j++)
		{
			if (!flag)
			{
				break;
			}
			// 오른쪽이 더 큼
			if (map[i][j] == map[i][j - 1] + 1)
			{
				int height = map[i][j - 1];
				int y = j - 1;
				int cnt = 0;

				while (cnt < k)
				{
					// 범위를 벗어나거나 높이가 다르거나 이미 경사로를 세움
					if (y < 0 || map[i][y] != height || used[y])
					{
						flag = false;
						break;
					}
					used[y] = 1;
					cnt++;
					y--;
				}
			}
			// 왼쪽이 더 큼
			else if (map[i][j] + 1 == map[i][j - 1])
			{
				int height = map[i][j];
				int y = j;
				int cnt = 0;

				while (cnt < k)
				{
					// 범위를 벗어나거나 높이가 다르거나 이미 경사로를 세움
					if (y >= n || map[i][y] != height || used[y])
					{
						flag = false;
						break;
					}
					used[y] = 1;
					cnt++;
					y++;
				}
				j += cnt - 1;
			}
			else if (map[i][j] == map[i][j - 1])
			{
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}
		// 가로 순회 끝
		if (!flag)
		{
			ans--;
		}
	}

	// 세로
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		initused();
		for (int j = 1; j < n; j++)
		{
			if (!flag)
			{
				break;
			}
			// 오른쪽이 더 큼
			if (map[j][i] == map[j - 1][i] + 1)
			{
				int height = map[j - 1][i];
				int x = j - 1;
				int cnt = 0;

				while (cnt < k)
				{
					if (x < 0 || map[x][i] != height || used[x])
					{
						flag = false;
						break;
					}
					used[x] = 1;
					cnt++;
					x--;
				}
			}
			// 왼쪽이 더 큼
			else if (map[j][i] + 1 == map[j - 1][i])
			{
				int height = map[j][i];
				int x = j;
				int cnt = 0;

				while (cnt < k)
				{
					if (x >= n || map[x][i] != height || used[x])
					{
						flag = false;
						break;
					}
					used[x] = 1;
					cnt++;
					x++;
				}
				j += cnt - 1;
			}
			else if (map[j][i] == map[j - 1][i])
			{
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}
		//세로 순회 끝
		if (!flag)
		{
			ans--;
		}
	}

	cout << ans << endl;
	return 0;
}
