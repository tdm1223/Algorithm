// 2293. 동전1
#include<iostream>

using namespace std;

int coin[100];
int d[10001]; //d[n] : 가치의 합이 n원이 되는 경우의 수

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> coin[i];
	d[0] = 1; //0원이 되는 경우의 수는 1가지

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (j - coin[i] >= 0)
				d[j] += d[j - coin[i]];
		}
	}

	cout << d[k] << endl;

	return 0;
}
