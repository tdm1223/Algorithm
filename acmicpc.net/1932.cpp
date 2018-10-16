// 1932. 정수 삼각형
// 2018.10.16
#include<iostream>
#include<algorithm>

using namespace std;

int a[501][501];
int d[501][501];//d[i][j] : i행j열까지의 최대가 되는 경로에 있는 수의 합
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}

	int ans = 0;
	d[0][0] = a[0][0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0) //가장 왼쪽
			{
				d[i][j] = d[i - 1][j] + a[i][j];
			}
			else if (j == i) //가장 오른쪽
			{
				d[i][j] = d[i - 1][j - 1] + a[i][j];
			}
			else //나머지
			{
				d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + a[i][j];
			}

			if (ans < d[i][j]) //최댓값 갱신
			{
				ans = d[i][j];
			}
		}
	}

	cout << ans << endl;
	return 0;
}
