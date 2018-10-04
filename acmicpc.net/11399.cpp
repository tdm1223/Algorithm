// 11399. ATM
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	//오름차순 정렬 후 하나씩 더하면된다.
	int ans = v[0];
	for (int i = 1; i < n; i++)
	{
		v[i] += v[i - 1];
		ans += v[i];
	}
	cout << ans << endl;
	return 0;
}
