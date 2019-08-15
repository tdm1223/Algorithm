// 5789. 현주의 상자 바꾸기
// 2019.08.15
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		int n, q;
		cin >> n >> q;
		vector<int> v(n, 0);

		for (int i = 0; i < q; i++)
		{
			int l, r;
			cin >> l >> r;
			for (int j = l - 1; j <= r - 1; j++)
			{
				v[j] = i + 1;
			}
		}
		cout << "#" << testCase << " ";
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
