// 1890. 점프
#include<iostream>
using namespace std;

int arr[101][101];
long long d[101][101];
int main()
{
	int n;
	cin >> n;

	d[1][1] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == 0 || (i == n && j == n))
				continue;
			if (j + arr[i][j] <= n)
			{
				d[i][j + arr[i][j]] += d[i][j];
			}
			if (i + arr[i][j] <= n)
			{
				d[i + arr[i][j]][j] += d[i][j];
			}
		}
	}

	cout << d[n][n] << endl;
	return 0;
}
