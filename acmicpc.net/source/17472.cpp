// 17472. 다리 만들기 2
// 2019.09.25
// DFS, 브루트포스, 시뮬레이션, Disjoint-set
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

// 방향 : 우,좌,상,하
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

// 섬 정보 구조체
struct island {
	vector<pair<int, int>> pos; // 섬을 이루고 있는 좌표들
	int idx; // 섬의 번호
};

// 다리 정보 구조체
struct bridge {
	int startX;
	int startY;
	int endX;
	int endY;
	int dir;
	int length;
	int from;
	int to;
};

vector<island> islands; // 섬들
vector<bridge> bridges; // 놓을 수 있는 다리들
int map[11][11];
int visit[11][11];
int ans = 987654321;
int islandCheck[101];
int check[101];
int arr[101];
int n, m;

// v의 최상위 노드 찾기
int FindSet(int v)
{
	if (v == islandCheck[v])
	{
		return v;
	}
	islandCheck[v] = FindSet(islandCheck[v]);

	return islandCheck[v];
}

// u를 v의 부분집합으로 넣기
void UnionSet(int u, int v)
{
	islandCheck[FindSet(u)] = FindSet(v);
}

// 다리 정렬하기
bool cmp(const bridge &a, const bridge &b)
{
	if (a.startX == b.startX)
	{
		if (a.startY == b.startY)
		{
			if (a.endX == b.endX)
			{
				return a.endY < b.endY;
			}
			return a.endX < b.endX;
		}
		return a.startY < b.startY;
	}
	return a.startX < b.startX;
}

// 다리를 섬-1개 만큼 뽑기
void go(int cnt, int edge, int start)
{
	if (cnt == edge)
	{
		for (int i = 1; i <= islands.size(); i++)
		{
			islandCheck[i] = i;
		}

		int bridgeCnt = 0;
		for (int i = 0; i < cnt; i++)
		{
			int dir = bridges[arr[i]].dir;
			int x = bridges[arr[i]].startX;
			int y = bridges[arr[i]].startY;

			// 섬을 연결
			int minIdx = bridges[arr[i]].from < bridges[arr[i]].to ? bridges[arr[i]].from : bridges[arr[i]].to;
			int maxIdx = bridges[arr[i]].from > bridges[arr[i]].to ? bridges[arr[i]].from : bridges[arr[i]].to;
			UnionSet(minIdx, maxIdx);

			while (1)
			{
				x += dx[dir];
				y += dy[dir];
				bridgeCnt++;
				if (x == bridges[arr[i]].endX - dx[dir] && y == bridges[arr[i]].endY - dy[dir])
				{
					break;
				}
			}
		}

		// 모든 섬이 연결 되었는지 확인
		int num = FindSet(islandCheck[1]);
		for (int i = 1; i <= islands.size(); i++)
		{
			if (FindSet(islandCheck[i]) != num)
			{
				return;
			}
		}
		ans = min(ans, bridgeCnt);
		return;
	}

	for (int i = start; i < bridges.size(); i += 2)
	{
		if (!check[i])
		{
			check[i] = 1;
			arr[cnt] = i;
			go(cnt + 1, edge, i + 2);
			check[i] = 0;
		}
	}
}

// 방향 바꾸는 함수
int changeDir(int dir)
{
	switch (dir)
	{
	case 0:
		dir = 1;
		break;
	case 1:
		dir = 0;
		break;
	case 2:
		dir = 3;
		break;
	case 3:
		dir = 2;
		break;
	}
	return dir;
}
int main()
{

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			map[i][j] = map[i][j];
		}
	}

	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 1 && visit[i][j] == 0)
			{
				queue<pair<int, int>> q;
				island tmp;
				tmp.idx = cnt;
				q.push({ i,j });
				tmp.pos.push_back({ i,j });
				visit[i][j] = 1;
				while (!q.empty())
				{
					int x = q.front().first;
					int y = q.front().second;
					map[x][y] = cnt;
					q.pop();
					for (int i = 0; i < 4; i++)
					{
						int xx = x + dx[i];
						int yy = y + dy[i];
						if (xx < 0 || yy < 0 || xx >= n || yy >= m)
						{
							continue;
						}
						// 방문하지 않았고 섬의 일부라면
						if (visit[xx][yy] == 0 && map[xx][yy])
						{
							q.push({ xx,yy });
							tmp.pos.push_back({ xx,yy });
							visit[xx][yy] = 1;
						}
					}
				}
				cnt++;
				islands.push_back(tmp);
			}
		}
	}

	// 섬의 개수만큼
	for (int i = 0; i < islands.size(); i++)
	{
		// 각 섬의 좌표 개수만큼
		for (int j = 0; j < islands[i].pos.size(); j++)
		{
			// 4방향 검사하여 다리를 놓을 수 있는지 확인
			for (int k = 0; k < 4; k++)
			{
				int num = 1;
				int x = islands[i].pos[j].first;
				int y = islands[i].pos[j].second;
				int idx = islands[i].idx;
				while (1)
				{
					int xx = x + dx[k] * num;
					int yy = y + dy[k] * num;
					if (xx < 0 || yy < 0 || xx >= n || yy >= m || map[xx][yy] == idx)
					{
						break;
					}

					if ((map[xx][yy] != idx && map[xx][yy] != 0))
					{
						if (num <= 2)
						{
							break;
						}
						// 다리를 놓을 수 있음
						else
						{
							bridge tmp;
							tmp.startX = x;
							tmp.startY = y;
							tmp.endX = xx;
							tmp.endY = yy;
							tmp.dir = k;
							tmp.from = idx;
							tmp.to = map[xx][yy];
							if (tmp.startX == tmp.endX)
							{
								if (tmp.startY > tmp.endY)
								{
									swap(tmp.startX, tmp.endX);
									swap(tmp.startY, tmp.endY);
									swap(tmp.from, tmp.to);
									tmp.dir = changeDir(tmp.dir);
								}
							}
							else if (tmp.startX > tmp.endX)
							{
								swap(tmp.startX, tmp.endX);
								swap(tmp.startY, tmp.endY);
								swap(tmp.from, tmp.to);
								tmp.dir = changeDir(tmp.dir);
							}
							bridges.push_back(tmp);
							break;
						}
					}
					num++;
				}
			}
		}
	}

	sort(bridges.begin(), bridges.end(), cmp);
	go(0, islands.size() - 1, 0);

	if (ans == 987654321)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << ans << endl;

	}

	return 0;
}
