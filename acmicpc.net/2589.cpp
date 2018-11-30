// 2589. 보물섬
// 2018.11.30
#include<iostream>
#include<queue>

using namespace std;

char map[51][51];
bool visit[51][51];
int dist[51][51];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int n, m;
int ans;
queue<pair<int, int>> q;
void Init()
{
	for (int i = 0; i < 51; i++)
	{
		for (int j = 0; j < 51; j++)
		{
			dist[i][j] = 0;
			visit[i][j] = false;
		}
	}
}

void BFS(int x, int y)
{
	visit[x][y] = true;
	q.push({ x,y });
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (xx<0 || yy<0 || xx>n || yy>m)
			{
				continue;
			}
			if (map[xx][yy] == 'L' && !visit[xx][yy])
			{
				visit[xx][yy] = true;
				q.push({ xx,yy });

				dist[xx][yy] = dist[x][y] + 1;
				if (ans < dist[xx][yy]) // 가장 큰 값 갱신
				{
					ans = dist[xx][yy];
				}
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 'L')
			{
				// 모든 육지에 대해 BFS를 실행한다.
				// BFS를 진행하면서 dist가 가장 큰 값으로 답이 갱신된다.
				BFS(i, j);
				// BFS 진행후 visit, dist 배열 초기화
				Init();
			}
		}
	}
	cout << ans << endl;
	return 0;
}
