// 2512. 예산
// 2019.05.20
// 이분탐색
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	cin >> m;

	sort(v.begin(), v.end());

	int total = 0;
	int left = 0;
	int right = v[v.size() - 1];
	for (int i = 0; i < v.size(); i++)
	{
		total += v[i];
	}
	int ans = 0;
	if (total <= m)//예산이 알맞는 경우 최댓값 출력
	{
		ans = right;
	}
	else
	{
		while (left <= right)
		{
			total = 0;
			int mid = (left + right) / 2;
			for (int i = 0; i < v.size(); i++)
			{
				if (v[i] < mid)
				{
					total += v[i];
				}
				else
					total += mid;
			}

			if (total > m)
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
	}
	ans = right;

	cout << ans << endl;
	return 0;
}
