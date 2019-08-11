// 17391. 무한부스터
// 2019.08.11
// BFS
#include<iostream>
#include<queue>

using namespace std;

int map[301][301];
int dist[301][301]; // dist[i][j] : i,j를 방문하는데 사용한 부스터의 개수
// 아래와 오른쪽으로만 이동 가능
int dx[2] = { 0,1 };
int dy[2] = { 1,0 };
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	// dist 배열을 -1로 초기화
	for (int i = 0; i < 301; i++)
	{
		fill(dist[i], dist[i] + 301, -1);
	}

	queue<pair<int, int>> q;
	q.push({ 0,0 });
	dist[0][0] = 0;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 2; i++)
		{
			for (int j = 1; j <= map[x][y]; j++)
			{
				int xx = x + dx[i] * j;
				int yy = y + dy[i] * j;

				if (xx < 0 || yy < 0 || xx >= n || yy >= m)
				{
					continue;
				}
				// 아직 방문하지 않은 곳이면 방문
				if (dist[xx][yy] == -1)
				{
					dist[xx][yy] = dist[x][y] + 1;
					q.push({ xx,yy });
				}
			}
		}
	}

	cout << dist[n - 1][m - 1] << endl;
	return 0;
}
