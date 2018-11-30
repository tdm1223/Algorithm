// 1507. 궁금한 민호
// 2018.11.30
#include<iostream>
#include<queue>

using namespace std;

int map[21][21];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}

	queue<pair<int, int>> q;
	bool flag = true;
	for (int i = 1; i <= n; i++)
	{
		for (int from = 1; from <= n; from++)
		{
			for (int to = 1; to <= n; to++)
			{
				if (from == to || from == i || i == to)
				{
					continue;
				}
				// from에서 i를 거쳐 to로 가는게 from에서 to로 가는 거리와 같다면
				// from에서 to로 가는 간선 삭제(이미 최소라 필요가 없다)
				if (map[from][to] == map[from][i] + map[i][to])
				{
					q.push({ from,to });
				}
				else if (map[from][to] > map[from][i] + map[i][to])
				{
					// 불가능한 경우
					flag = false;
				}
			}
		}
	}

	// 삭제해야될 간선들을 0으로 만들어서 삭제
	while (!q.empty())
	{
		int first = q.front().first;
		int second = q.front().second;
		q.pop();
		map[first][second] = 0;
	}

	// 간선의 합을 구함
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			sum += map[i][j];
		}
	}

	if (flag)
	{
		cout << sum << endl;
	}
	else
	{
		cout << -1 << endl;
	}
	return 0;
}
