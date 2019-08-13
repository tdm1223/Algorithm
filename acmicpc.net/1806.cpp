// 1806. 부분합
// 2019.08.13
// 구현, 투포인터
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, s;
	cin >> n >> s;

	int left = 0;
	int sum = 0;
	int cnt = 0;
	int ans = 987654321;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		v.push_back(k);
		sum += k;
		cnt++;

		while (sum >= s)
		{
			ans = min(ans, cnt);
			sum -= v[left++];
			cnt--;
		}
	}

	if (ans == 987654321)
	{
		cout << "0\n";
	}
	else
	{
		cout << ans << "\n";
	}

	return 0;
}
