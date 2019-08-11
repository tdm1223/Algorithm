// 17390. 이건 꼭 풀어야 해!
// 2019.08.11
// 다이나믹 프로그래밍
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int d[300001]; // d[n] : 1항부터 n항까지의 합
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	// n번째 항까지의 합을 구함
	d[0] = v[0];
	for (int i = 1; i <= n; i++)
	{
		d[i] = d[i - 1] + v[i - 1];
	}

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		// y까지의 합 - x까지의 합 + x번째 항
		cout << d[y] - d[x] + v[x - 1] << "\n";
	}
	return 0;
}
