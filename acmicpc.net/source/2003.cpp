// 2003. 수들의 합 2
// 2019.08.12
// 투 포인터, 구현
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int left = 0;
	int sum = 0;
	int ans = 0;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		v.push_back(k);
		sum += k;

		// sum이 m을 초과하지 않을때 까지 왼쪽부터 값을 제거함
		while (sum > m)
		{
			sum -= v[left];
			left++;
		}

		// sum과 m이 같다면 +1
		if (sum == m)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
