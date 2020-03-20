// 9507. Generations of Tribbles
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

long long d[68]; // d[i] : i번째 꿍 피보나치
int main()
{
	int t, n;
	cin >> t;
	d[0] = 1;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	while (t--)
	{
		cin >> n;
		if (d[n] == 0)
		{
			for (int i = 4; i <= n; i++)
			{
				d[i] = d[i - 1] + d[i - 2] + d[i - 3] + d[i - 4];
			}
		}
		cout << d[n] << endl;
	}
	return 0;
}
