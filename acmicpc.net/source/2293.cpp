// 2293. 동전1
// 2019.05.20
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int coin[100];
int d[10001]; //d[n] : 가치의 합이 n원이 되는 경우의 수

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> coin[i];
	}

	d[0] = 1; //0원이 되는 경우의 수는 1가지

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			//모든 동전에 대해 그 가치를 뺏을때 0보다 크다면 뺀 값의 경우의 수 추가
			if (j - coin[i] >= 0)
			{
				d[j] += d[j - coin[i]];
			}
		}
	}

	cout << d[k] << endl;
	return 0;
}
