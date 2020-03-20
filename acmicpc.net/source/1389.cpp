// 1389. 케빈 베이컨의 6단계 법칙
// 2019.05.18
// 플로이드 와샬 알고리즘
#include<iostream>
#include<map>

using namespace std;

int d[101][101];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int from, to;
		cin >> from >> to;
		d[from][to] = 1;
		d[to][from] = 1;
	}

	// 친구관계를 거치는데 필요한 최소 단계를 저장
	// i를 거쳐가는게 더 빠를 경우 update
	for (int i = 1; i <= n; i++)
	{
		for (int from = 1; from <= n; from++)
		{
			if (d[from][i] == 0)
			{
				continue; // 출발지에서 i로 가는 경로가 없을땐 무시
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

	map<int, int> map; // (sum, 사람의 번호)를 저장하는 map
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = 1; j <= n; j++)
		{
			sum += d[i][j];
		}
		// 번호가 가장 작은 사람을 출력하기 위해 값이 존재하지 않을때만 삽입
		if (map.find(sum) == map.end())
		{
			map[sum] = i;
		}
	}
	// 최소인 사람의 번호 출력
	cout << map.begin()->second << endl;
	return 0;
}
