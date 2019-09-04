// 3085. 사탕 게임
// 2019.09.04
// 브루트 포스
#include<iostream>
#include<algorithm>

using namespace std;

char map[51][51];
int n;
int ans;
void check()
{
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			char cur = map[i][j];
			int idx = 0;
			// 아래 방향 검사
			if (i + 1 < n)
			{
				cnt = 1;
				idx = i;
				while (1)
				{
					if (map[idx + 1][j] == cur && idx + 1 < n)
					{
						cnt++;
						idx++;
					}
					else
					{
						break;
					}
				}
				ans = max(cnt, ans);
			}

			// 오른쪽 방향 검사
			if (j + 1 < n)
			{
				cnt = 1;
				idx = j;
				while (1)
				{
					if (map[i][idx + 1] == cur && idx + 1 < n)
					{
						cnt++;
						idx++;
					}
					else
					{
						break;
					}
				}
				ans = max(cnt, ans);
			}
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// 아래 방향 검사
			if (i + 1 < n)
			{
				char k = map[i][j];
				map[i][j] = map[i + 1][j];
				map[i + 1][j] = k;

				check();

				k = map[i][j];
				map[i][j] = map[i + 1][j];
				map[i + 1][j] = k;
			}

			// 오른쪽 방향 검사
			if (j + 1 < n)
			{
				char k = map[i][j];
				map[i][j] = map[i][j + 1];
				map[i][j + 1] = k;

				check();

				k = map[i][j];
				map[i][j] = map[i][j + 1];
				map[i][j + 1] = k;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
