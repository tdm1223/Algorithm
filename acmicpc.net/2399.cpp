// 2399. 거리의 합
// 2019.08.26
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	long long ans = 0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			ans += (v[j] - v[i]) * 2;
		}
	}
	cout << ans << "\n";
	return 0;
}
