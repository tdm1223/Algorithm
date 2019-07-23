// 17141. 연구소 2
// 2019.05.22
// BFS
// https://tdm1223.tistory.com/26
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

// visit와 dist 초기화
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
			// 벽이면 방문표시하고 dist를 -1로 바꿈.
			if (map[i][j] == 1)
			{
				visit[i][j] = 1;
				dist[i][j] = -1;
			}
		}
	}

	// 바이러스 선택하여 방문표시하고 큐에 넣음
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

	// BFS 실행
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			// 범위를 벗어남
			if (xx < 0 || yy < 0 || xx >= n || yy >= n)
			{
				continue;
			}

			// 벽
			if (map[xx][yy] == 1)
			{
				continue;
			}

			// 아직 방문하지 않았다면 방문체크 후 시간 증가
			if (!visit[xx][yy])
			{
				dist[xx][yy] = dist[x][y] + 1;
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
			// 벽이 아니고 방문을 안한 칸이 있다면 바이러스 퍼뜨리기 불가능
			if (map[i][j] != 1 && visit[i][j] == 0)
			{
				return;
			}
			else
			{
				cnt = max(cnt, dist[i][j]);
			}
		}
	}

	// 최소 시간 갱신
	ans = min(ans, cnt);
}

// 2가 있는 들어가있는 것들 중 m개 선택하는 함수
void go(int cnt, int idx)
{
	if (cnt == m)
	{
		// 모두 선택했다면 바이러스를 퍼뜨림
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
