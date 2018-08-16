#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m, ans = 0;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> v[i];
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (v[i] + v[j] + v[k] <= m && m - (v[i] + v[j] + v[k]) < m - ans)
					ans = v[i] + v[j] + v[k];
			}
		}
	}
	cout << ans << endl;
	return 0;
}