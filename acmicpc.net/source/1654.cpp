// 1654. 랜선 자르기
// 2020.01.10
// 이분 탐색
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int k, n;
int main()
{
	cin >> k >> n;
	vector<long long> wire(k);
	long long ans = 0;
	long long low = 1;
	long long high = 0;
	for (int i = 0; i < k; i++)
	{
		cin >> wire[i];
		high = max(high, wire[i]);
	}

	// 이분 탐색
	while (low <= high)
	{
		long long mid = (low + high) / 2;

		// 개수 확인
		long long total = 0;
		for (int i = 0; i < k; i++)
		{
			total += wire[i] / mid;
		}

		// 개수 만족
		if (total >= n)
		{
			// 개수 만족한 상태인데 길이도 더 길때 답으로 저장
			if (ans < mid)
			{
				ans = mid;
			}
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << ans << "\n";
	return 0;
}
