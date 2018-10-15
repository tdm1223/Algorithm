// 11057. 오르막 수
// 2018.10.15
#include<iostream>

using namespace std;

int d[10][1001]; //d[i][j] : 끝이 i(0~9)인 길이가 j인 오르막 수의 개수
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++)
	{
		d[i][1] = 1; //길이가 1인 오르막 수의 개수는 1개
	}

	for (int i = 2; i < n + 1; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				//j보다 작거나 같은k에 대해 끝이 k인 길이가 i-1인 오르막 수의 개수를 모두 더함
				d[j][i] += d[k][i - 1] % 10007;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < 10; i++)
	{
		ans += d[i][n];
	}
	cout << ans % 10007 << endl;
	return 0;
}
