// 2644. 촌수계산
// 2019.05.20
// BFS
#include<iostream>
#include<queue>

using namespace std;

int relation[101][101];
bool visit[101];
int dist[101];
int main()
{
	int n, a, b, m;
	cin >> n >> a >> b >> m;

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		relation[x][y] = 1;
		relation[y][x] = 1;
	}

	queue<int> q;
	q.push(a);
	visit[a] = true;
	dist[a] = 0;
	while (!q.empty())
	{
		int front = q.front();
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			// 관계가 있고 방문하지 않았을 때
			if (relation[front][i] == 1 && !visit[i])
			{
				visit[i] = true;
				q.push(i);
				dist[i] = dist[front] + 1;
			}
		}
	}

	// 촌수를 계산할 수 없을 때 -1 출력
	if (dist[b] == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << dist[b] << endl;
	}
	return 0;
}
