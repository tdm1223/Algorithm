// 10539. 수빈이와 수열
// 2019.05.22
// 구현
#include<iostream>
#include<vector>

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
	vector<int> ans;
	ans.push_back(v[0]);
	int sum = v[0];
	// 문제에서 주어진대로 수열의 값을 구한다.
	for (int i = 1; i < n; i++)
	{
		int tmp = v[i] * (i + 1);
		ans.push_back(tmp - sum);
		sum += (tmp - sum);
	}
	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
