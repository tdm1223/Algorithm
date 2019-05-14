// 1238. 파티
// 2019.05.14
// 플로이드 와샬 알고리즘
#include<iostream>
#include<algorithm>

using namespace std;

int d[1001][1001];
int main()
{
	int n, m, x;
	cin >> n >> m >> x;
	for (int i = 0; i < m; i++)
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		d[from][to] = cost;
	}

	// i를 거쳐가는게 더 빠를 경우 update
	for (int i = 1; i <= n; i++)
	{
		for (int from = 1; from <= n; from++)
		{
			if (d[from][i] == 0)
			{
				continue;// 출발지에서 i로 가는 경로가 없을땐 무시
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
	// 모든 학생에 대해 x까지의 왕복하는데 걸리는 시간 중 가장 오래 걸리는 학생 구하기
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		sum = d[i][x] + d[x][i];
		ans = max(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
