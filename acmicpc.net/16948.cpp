// 16948. 데스 나이트
// 2019.05.25
// BFS
#include<iostream>
#include<queue>

using namespace std;

int dx[6] = { -2,-2,0,0,2,2 };
int dy[6] = { -1,1,-2,2,-1,1 };
int dist[201][201]; // dist[i][j] : i,j를 방문하는 최소 이동 횟수
int main()
{
	int n, r1, c1, r2, c2;
	cin >> n >> r1 >> c1 >> r2 >> c2;
	// -1로 채움
	for (int i = 0; i <= n; i++)
	{
		fill(dist[i], dist[i] + n + 1, -1);
	}
	queue<pair<int, int>> q;
	q.push({ r1,c1 });
	dist[r1][c1] = 0;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		// 6가지 방법 이동
		for (int i = 0; i < 6; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];
			// 범위를 벗어남
			if (xx > n || yy > n || xx < 0 || yy < 0)
			{
				continue;
			}
			// 아직 방문하지 않았던 곳이면 큐에 넣고 거리입력
			if (dist[xx][yy] == -1)
			{
				dist[xx][yy] = dist[x][y] + 1;
				q.push({ xx,yy });
			}
		}
	}
	cout << dist[r2][c2] << endl;
	return 0;
}
