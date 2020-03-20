// 2468. 안전 영역
// 2019.05.20
// BFS, DFS
#include<iostream>
#include<algorithm>

using namespace std;

int n;
int arr[101][101];
int visit[101][101];
int cnt;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void DFS(int x, int y, int h)
{
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		if (x >= n || y >= n || x < 0 || y < 0)
		{
			continue;
		}
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (visit[xx][yy] == 0 && arr[xx][yy] > h)
		{
			DFS(xx, yy, h);
		}
	}
}

int main()
{
	cin >> n;
	int min = 101;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}

	int ans = 1;
	for (int i = min; i < max; i++)
	{
		cnt = 0;
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				visit[j][k] = 0;
			}
		}

		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (visit[j][k] == 0 && arr[j][k] > i)
				{
					DFS(j, k, i);
					cnt++;
				}
			}
		}
		ans = ans > cnt ? ans : cnt;
	}
	cout << ans << endl;
	return 0;
}
