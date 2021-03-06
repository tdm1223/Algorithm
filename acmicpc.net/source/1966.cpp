// 1966. 프린터 큐
// 2019.05.19
// 브루트 포스, 큐, 시뮬레이션
#include<string>
#include<queue>
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n, m, answer = 0;
		cin >> n >> m;
		queue <pair<int, int>> q;
		priority_queue <int> pq; // 우선순위 큐 선언

		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			q.push({ i,tmp });
			pq.push(tmp);
		}

		while (!q.empty())
		{
			int index = q.front().first;
			int priority = q.front().second;
			q.pop();

			if (pq.top() == priority) // 값 비교
			{
				pq.pop();
				answer++;
				if (index == m) // 인덱스 비교
				{
					break;
				}
			}
			else
			{
				q.push({ index,priority });
			}
		}
		cout << answer << endl;
	}
	return 0;
}
