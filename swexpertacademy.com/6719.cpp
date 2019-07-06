// 6719. 성수의 프로그래밍 강좌 시청
// 2019.07.06
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end(), greater<int>());

		float ans = 0.0f;
		if (k == 1)
		{
			ans = (ans + v[0]) / 2;
		}
		else
		{
			for (int i = k - 1; i >= 0; i--)
			{
				ans = ((ans + v[i]) / 2);
			}
		}
		printf("#%d %f\n", test_case, ans);
	}
	return 0;
}
