// 16988. Baaaaaaaaaduk2 (Easy)
// 2019.04.07
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int map[21][21];
int visit[21][21];
int n, m;
vector<pair<int, int>> possible; // 돌을 놓을 수 있는 곳의 집합
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void Init()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			visit[i][j] = 0;
		}
	}
}

int ans = 0;
int go(pair<int, int>& i, pair<int, int>& j)
{
	int res = 0;
	int x1 = i.first;
	int y1 = i.second;
	int x2 = j.first;
	int y2 = j.second;

	map[x1][y1] = 1;
	map[x2][y2] = 1;
	Init();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (visit[i][j] || map[i][j] != 2)
			{
				continue;
			}
			bool flag = true; // 돌을 죽일 수 있다면 true
			queue<pair<int, int>> q;
			q.push({ i,j });
			visit[i][j] = true;
			int cnt = 0;
			while (!q.empty())
			{
				cnt++; // 2인 영역의 개수
				int x = q.front().first;
				int y = q.front().second;
				q.pop();

				for (int dir = 0; dir < 4; dir++)
				{
					int xx = x + dx[dir];
					int yy = y + dy[dir];

					// 영역벗어난거도 덮은것
					if (xx < 0 || yy < 0 || xx >= n || yy >= m)
					{
						continue;
					}

					// 이미 방문한 곳이거나 막혀있다면
					if (visit[xx][yy] || map[xx][yy] == 1)
					{
						continue;
					}

					// 돌을 죽일수 없으므로 false로
					if (map[xx][yy] == 0)
					{
						flag = false;
					}

					q.push({ xx,yy });
					visit[xx][yy] = 1;
				}
			}
			// 돌을 죽일 수 있을때만 영역의 개수를 더해줌
			if (flag)
			{
				res += cnt;
			}
		}
	}

	map[x1][y1] = 0;
	map[x2][y2] = 0;
	return res;
}


int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 0)
			{
				possible.push_back({ i,j });
			}
		}
	}

	for (int i = 0; i < possible.size()-1; i++)
	{
		for (int j = i + 1; j < possible.size(); j++)
		{
			ans = max(ans,go(possible[i], possible[j]));
		}
	}
	cout << ans << endl;

	return 0;
}
