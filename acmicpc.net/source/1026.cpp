// 1026. 보물
// 2019.05.14
// 정렬, 탐색
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += a[n - i - 1] * b[i];
	}
	cout << ans << endl;
	return 0;
}
