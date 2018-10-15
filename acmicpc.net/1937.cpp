// 1937. 욕심쟁이 판다
// 2018.10.15
#include<iostream>
#include<algorithm>

using namespace std;

int d[500][500]; //d[i][j] : i,j에 판다의 최대 이동횟수 저장
int a[500][500]; // a[i][j] : i,j에 있는 대나무의 양
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int n;

int DFS(int x, int y)
{
	if (d[x][y])
	{
		return d[x][y];
	}

	d[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx < 0 || xx >= n || yy < 0 || yy >= n)
		{
			continue;
		}

		if (a[x][y] < a[xx][yy])
		{
			d[x][y] = max(d[x][y], DFS(xx, yy) + 1);
		}
	}

	return d[x][y];
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ans = max(ans, DFS(i, j));
		}
	}

	cout << ans << endl;
	return 0;
}
