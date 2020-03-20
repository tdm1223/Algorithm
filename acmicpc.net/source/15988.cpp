// 15988. 1, 2, 3 더하기 3
// 2019.09.15
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

long long d[1000001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for (int i = 4; i <= 1000000; i++)
	{
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		d[i] %= 1000000009;
	}
	while (t-- > 0)
	{
		int k;
		cin >> k;
		cout << d[k] << "\n";
	}
	return 0;
}
