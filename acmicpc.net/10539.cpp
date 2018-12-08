// 10539. 수빈이와 수열
// 2018.12.08
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
