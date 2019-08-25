// 17263. Sort 마스터 배지훈
// 2019.08.25
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
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cout << v[n - 1] << "\n";
	return 0;
}
