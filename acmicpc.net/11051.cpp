// 11051. 이항계수 2
#include <iostream>

using namespace std;

int d[1001][1001];  //d[n][k] : nCk를 10007로 나눈 나머지
int main()
{
	int n, k;
	cin >> n >> k;

	d[1][0] = 1;
	d[1][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
			{
				d[i][j] = 1;
			}
			else
			{
				d[i][j] = d[i - 1][j - 1] + d[i - 1][j];
			}
			d[i][j] %= 10007;
		}
	}

	cout << d[n][k] << endl;
	return 0;
}
