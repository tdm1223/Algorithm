// 8457. 알 덴테 스파게티
// 2020.01.27
#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		int n, b, e;
		cin >> n >> b >> e;
		int minTime = b - e;
		int maxTime = b + e;

		int ans = 0;
		int x;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			// 범위 내에서 나누어 떨어지면 측정 가능
			for (int j = b - e; j <= b + e; j++)
			{
				if (j%x == 0)
				{
					ans++;
					break;
				}
			}
		}
		cout << "#" << testCase << " " << ans << "\n";
	}
	return 0;
}
