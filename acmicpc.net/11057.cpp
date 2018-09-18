// 11057. 오르막 수
#include<iostream>

using namespace std;

int d[10][1001];
int a[1001];

int main()
{
	int n;
	cin >> n;
	a[1] = 10;
	for (int i = 0; i < 10; i++)
	{
		d[i][1] = 1;
	}
	for (int i = 2; i < n + 1; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				d[j][i] += d[k][i - 1] % 10007;
			}
			a[i] = (a[i] + d[j][i]) % 10007;
		}
	}

	cout << a[n] << endl;
	return 0;
}
