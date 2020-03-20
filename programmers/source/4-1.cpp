// 게임 맵 최단거리
// 2019.08.27
#include<vector>
#include<queue>

using namespace std;

int dist[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int solution(vector<vector<int> > maps)
{
	int answer = 0;
	int n = maps.size();
	int m = maps[0].size();

	// 초기화
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			dist[i][j] = -1;
		}
	}

	queue<pair<int, int>> q;
	q.push({ 0,0 });
	dist[0][0] = 1;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx < 0 || yy < 0 || xx >= n || yy >= m)
			{
				continue;
			}

			// 아직 방문하지 않았고 이동할 수 있다면 큐에 추가
			if (dist[xx][yy] == -1 && maps[xx][yy] == 1)
			{
				dist[xx][yy] = dist[x][y] + 1;
				q.push({ xx,yy });
			}
		}
	}
	answer = dist[n - 1][m - 1];
	return answer;
}
