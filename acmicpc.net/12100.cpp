// 12100. 2048(Easy)
// 2019.04.04
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int map[21][21];
int copyMap[21][21];
int n;
int arr[5];
int ans = 0;
// 0123 : 상하좌우
void go(int cnt)
{
	if (cnt == 5)
	{
		for (int i = 0; i < n; i++)
		{
			fill(copyMap[i], copyMap[i] + n, 0);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				copyMap[i][j] = map[i][j];
			}
		}

		for (int i = 0; i < cnt; i++)
		{
			switch (arr[i])
			{
			case 0: // 상 (아래에서 위로)
				for (int j = 0; j < n; j++)
				{
					queue<int> q;
					for (int k = 0; k < n; k++)
					{
						if (copyMap[k][j] != 0)
						{
							q.push(copyMap[k][j]);
							copyMap[k][j] = 0;
						}
					}
					int cnt = 0;
					while (!q.empty())
					{
						int x = q.front();
						q.pop();
						if (!q.empty())
						{
							int x2 = q.front();
							if (x == x2)
							{
								copyMap[cnt++][j] = x * 2;
								q.pop();
							}
							else
							{
								copyMap[cnt++][j] = x;
							}
						}
						else
						{
							copyMap[cnt++][j] = x;
						}
					}
				}
				break;
			case 1: // 하 (위에서 아래로)
				for (int j = 0; j < n; j++)
				{
					queue<int> q;
					for (int k = n; k >= 0; k--)
					{
						if (copyMap[k][j] != 0)
						{
							q.push(copyMap[k][j]);
							copyMap[k][j] = 0;
						}
					}
					int cnt = n - 1;
					while (!q.empty())
					{
						int x = q.front();
						q.pop();
						if (!q.empty())
						{
							int x2 = q.front();
							if (x == x2)
							{
								copyMap[cnt--][j] = x * 2;
								q.pop();
							}
							else
							{
								copyMap[cnt--][j] = x;
							}
						}
						else
						{
							copyMap[cnt--][j] = x;
						}
					}
				}
				break;
			case 2: // 좌 (오른쪽에서 왼쪽으로)
				for (int j = 0; j < n; j++)
				{
					queue<int> q;
					for (int k = 0; k < n; k++)
					{
						if (copyMap[j][k] != 0)
						{
							q.push(copyMap[j][k]);
							copyMap[j][k] = 0;
						}
					}
					int cnt = 0;
					while (!q.empty())
					{
						int x = q.front();
						q.pop();
						if (!q.empty())
						{
							int x2 = q.front();
							if (x == x2)
							{
								copyMap[j][cnt++] = x * 2;
								q.pop();
							}
							else
							{
								copyMap[j][cnt++] = x;
							}
						}
						else
						{
							copyMap[j][cnt++] = x;
						}
					}
				}
				break;
			case 3: // 우 (왼쪽에서 오른쪽으로)
				for (int j = 0; j < n; j++)
				{
					queue<int> q;
					for (int k = n - 1; k >= 0; k--)
					{
						if (copyMap[j][k] != 0)
						{
							q.push(copyMap[j][k]);
							copyMap[j][k] = 0;
						}
					}
					int cnt = n - 1;
					while (!q.empty())
					{
						int x = q.front();
						q.pop();
						if (!q.empty())
						{
							int x2 = q.front();
							if (x == x2)
							{
								copyMap[j][cnt--] = x * 2;
								q.pop();
							}
							else
							{
								copyMap[j][cnt--] = x;
							}
						}
						else
						{
							copyMap[j][cnt--] = x;
						}
					}
				}
				break;
			}
		}

		// 최댓값 갱신
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				ans = max(ans, copyMap[i][j]);
			}
		}
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		arr[cnt] = i;
		go(cnt + 1);
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

	go(0);

	cout << ans << endl;
	return 0;
}
