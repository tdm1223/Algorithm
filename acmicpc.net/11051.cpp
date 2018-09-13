// 11051. 이항계수 2
#include <iostream>
#include <algorithm>
#include<vector>
#include<string>
using namespace std;

int ans[1001][1001];

int main()
{
	int n, k;
	cin >> n >> k;

	ans[1][0] = ans[1][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
				ans[i][j] = 1;
			else
				ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
			ans[i][j] %= 10007;
		}
	}

	cout << ans[n][k] << endl;
	return 0;

}
