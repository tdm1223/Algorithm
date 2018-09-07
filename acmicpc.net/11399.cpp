// 11399. ATM
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	int ans = v[0];
	for (int i = 1; i < n; i++)
	{
		v[i] = v[i - 1] + v[i];
		ans += v[i];
	}
	cout << ans << endl;
	return 0;
}
