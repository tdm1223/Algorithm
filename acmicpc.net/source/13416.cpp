// 13416. 주식 투자
// 2019.09.01
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		int a, b, c;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b >> c;
			int m = max(max(a, b), c);
			if (m < 0)
			{
				continue;
			}
			else
			{
				ans += m;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
