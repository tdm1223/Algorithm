// 11049. 행렬 곱셈 순서
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>
#include<algorithm>

using namespace std;

int a[501][501];
int d[501][501]; // d[i][j] : 행렬 i부터 j까지 곱할 때 필요한 곱셈 연산의 최솟값
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i][0] >> a[i][1];
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= n - i; j++)
		{
			d[j][j + i] = 2147483637; // INT_MAX
			for (int k = j + 1; k < j + i; k++)
			{
				d[j][j + i] = min(d[j][j + i], d[j][k] + d[k][j + i] + a[j][0] * a[k][0] * a[j + i - 1][1]);
			}
		}
	}
	cout << d[0][n] << endl;
	return 0;
}
