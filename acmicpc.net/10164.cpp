// 10164. 격자상의 경로
// 분류 : Dynamic Programming
// 2018.11.25
#include<iostream>

using namespace std;

int d[16][16];
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
	{
		d[i][1] = 1;
	}
	for (int i = 1; i <= m; i++)
	{
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= m; j++)
		{
			d[i][j] = d[i - 1][j] + d[i][j - 1];
		}
	}

	if (k == 0)
	{
		cout << d[n][m] << endl;
	}
	else
	{
		// k의 행, 열을 구한다.
		int x = k / m + (k%m > 0 ? 1 : 0); // 1부터 시작이므로 나누어 떨어지면 1을 더함
		int y = k - (x - 1)*m;
		cout << d[x][y] * d[n - x + 1][m - y + 1] << endl;
	}
	return 0;
}
