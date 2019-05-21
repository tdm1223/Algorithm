// 17142. 연구소 3
// 2019.05.21
// BFS, 브루트 포스, 시뮬레이션
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int ans = 987654321;
int map[51][51];
int arr[10];
int arrVisit[10];
int n, m;
int dist[51][51];
int visit[51][51];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
vector<pair<int, int>> v;

// 초기화 함수
void Init()
{
	for (int i = 0; i < 51; i++)
	{
		fill(visit[i], visit[i] + 51, 0);
		fill(dist[i], dist[i] + 51, 0);
	}
}
// 바이러스 퍼뜨리는 함수
void Spread()
{
	Init();
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 1)
			{
				visit[i][j] = 1;
				dist[i][j] = -1;
			}
		}
	}

	// 바이러스 선택하여 방문표시하고 거리 0
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[j] == i)
			{
				q.push({ v[i].first,v[i].second });
				visit[v[i].first][v[i].second] = 1;
			}
		}
	}

	// BFS
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx < 0 || yy < 0 || xx >= n || yy >= n)
			{
				continue;
			}

			if (map[xx][yy] == 1)
			{
				continue;
			}

			if (!visit[xx][yy])
			{
				dist[xx][yy] = dist[x][y]+1;
				visit[xx][yy] = 1;
				q.push({ xx,yy });
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// 벽이 아니고 방문을 안함
			if (map[i][j] != 1 && visit[i][j] == 0)
			{
				return;
			}
			else
			{
				// 비활성 바이러스가 활성이 된 지점은 최댓값이 될 수 없다.
				if (map[i][j] != 2)
				{
					cnt = max(cnt, dist[i][j]);
				}
			}
		}
	}
	ans = min(ans, cnt);
}

// m개 뽑는 함수
void go(int cnt, int idx)
{
	if (cnt == m)
	{
		Spread();
		return;
	}

	for (int i = idx; i < v.size(); i++)
	{
		if (!arrVisit[i])
		{
			arrVisit[i] = 1;
			arr[cnt] = i;
			go(cnt + 1, i);
			arrVisit[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 2)
			{
				v.push_back({ i,j });
			}
		}
	}

	go(0, 0);
	if (ans == 987654321)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << ans << endl;
	}
	return 0;
}
