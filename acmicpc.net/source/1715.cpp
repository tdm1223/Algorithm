// 1715. 카드 정렬하기
// 2019.08.26
// 자료구조, 힙
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int, vector<int>, greater<int>> pq;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		pq.push(k);
	}

	int ans = 0;
  // 카드묶음이 하나면 비교할 필요 없음
	if (n == 1)
	{
		ans = 0;
	}
	else
	{
		while (1)
		{
			int first = pq.top();
			pq.pop();
			int second = pq.top();
			pq.pop();
			ans += first + second;
			pq.push(first + second);
			if (pq.size() == 1)
			{
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
