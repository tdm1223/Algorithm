// 1932. 정수 삼각형
#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int d[501][501];//d[i][j] : i행j열까지의 최대가 되는 경로에 있는 수의 합
int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> d[i][j];
			if (j == 1) //가장 왼쪽
			{
				d[i][j] += d[i - 1][j];
			}
			else if (j == i) //가장 오른쪽
			{
				d[i][j] += d[i - 1][j - 1];
			}
			else //나머지
			{
				d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + d[i][j];
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
