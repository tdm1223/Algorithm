// 2019.03.02
// 2581. 소수
#include<iostream>

using namespace std;

bool prime[10001];
void go()
{
	for (int i = 2; i <= 10000; i++)
	{
		prime[i] = true;
	}

	for (int i = 2; i * i <= 10000; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 10000; j += i)
			{
				prime[j] = false;
			}
		}
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	int min = 0;
	int sum = 0;
	go();
	for (int i = n; i >= m; i--)
	{
		if (prime[i] == 1)
		{
			sum += i;
			min = i;
		}
	}
	if (sum == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << sum << endl << min << endl;
	}
	return 0;
}
