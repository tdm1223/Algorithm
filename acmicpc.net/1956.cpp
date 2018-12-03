// 1956. 운동
// 분류 : 플로이드 와샬 알고리즘
// 2018.12.03
#include<iostream>
#include<algorithm>

using namespace std;

int d[401][401];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		d[from][to] = cost;
	}

	//i를 거쳐가는게 더 빠를 경우 update
	for (int i = 1; i <= n; i++)
	{
		for (int from = 1; from <= n; from++)
		{
			if (d[from][i] == 0)
			{
				continue;//출발지에서 i로 가는 경로가 없을땐 무시
			}
			for (int to = 1; to <= n; to++)
			{
				// i에서 to로 가는 비용이 없거나 출발지=도착지 일땐 무시
				if (d[i][to] == 0 || from == to)
				{
					continue;
				}
				// 아직 비용이 없거나 i를 거치는게 최소 비용일 경우 갱신
				if (d[from][to] == 0 || d[from][to] > d[from][i] + d[i][to])
				{
					d[from][to] = d[from][i] + d[i][to];
				}
			}
		}
	}

	int ans = 2147483647;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] != 0 && d[j][i] != 0)
			{
				ans = min(ans, d[i][j] + d[j][i]);
			}
		}
	}
	if (ans == 2147483647)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << ans << endl;
	}
	return 0;
}
