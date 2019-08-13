// 11441. 합 구하기
// 2019.08.13
// 수학
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> sum(n);
	vector<int> arr(n);
	int k;
	cin >> k;
	sum[0] = k;
	arr[0] = k;
	// i번째 항을 입력 받을 때 1번째부터 i번째 항까지의 합도 같이 저장
	for (int i = 1; i < n; i++)
	{
		cin >> k;
		arr[i] = k;
		sum[i] = sum[i - 1] + k;
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << sum[b - 1] - sum[a - 1] + arr[a - 1] << "\n";
	}

	return 0;
}
