// 2805. 나무 자르기
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	long long n, m, max = 0;
	long long ans = 0;
	cin >> n >> m;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (max < v[i])
			max = v[i];
	}
	int left = 0;
	int right = max;

	while (left <= right)
	{
		long long mid = (left + right) / 2;
		long long total = 0; //자르고 나온 통나무들의 합을 구하는 변수

		for (int i = 0; i < n; i++)
		{
			if (mid < v[i])
				total += v[i] - mid;
		}

		if (total >= m) //절단기의 높이를 높인다.
		{
			if (ans < mid)
				ans = mid;
			left = mid + 1;
		}
		else //절단기의 높이를 낮춘다.
		{
			right = mid - 1;
		}
	}

	cout << ans << endl;
	return 0;
}
