// 2167. 2차원 배열의 합
#include<iostream>

using namespace std;

int d[301][301];
int sum[301][301]; //sum[i][j] : 1,1부터 i,j까지의 합

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)//행
	{
		for (int j = 1; j <= m; j++)//열
		{
			cin >> d[i][j];
		}
	}

	for (int i = 1; i <= n; i++)//행
	{
		for (int j = 1; j <= m; j++)//열
		{
			sum[i][j] = sum[i][j - 1] + d[i][j];
		}
	}

	int t, i, j, x, y;
	cin >> t;
	int ans;
	while (t > 0)
	{
		t--;
		ans = 0;
		cin >> i >> j >> x >> y;
		for (int a = i; a <= x; a++)
		{
			ans += (sum[a][y] - sum[a][j - 1]); //각 행별로합을 구함
		}
		cout << ans << endl;
	}
	return 0;
}
