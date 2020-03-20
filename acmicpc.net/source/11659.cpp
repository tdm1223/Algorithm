// 11659. 구간 합 구하기 4
// 2020.01.08
// 수학
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	int k;
	cin >> n >> m;
	vector<int> v(n + 1);
	vector<int> sum(n + 1);
	cin >> k;
	v[1] = k;
	for (int i = 2; i <= n; i++)
	{
		cin >> v[i];
		sum[i] = sum[i - 1] + v[i]; // 누적합을 미리 구함
	}

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		cout << sum[y] - sum[x] + v[x] << "\n";
	}
	return 0;
}
