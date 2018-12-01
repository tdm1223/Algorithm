// 14502. 연구소
// 2018.12.01
#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int n, m;
int lab[9][9];
int map[9][9];
int tmp[9][9];
int ans;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
void Init()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			map[i][j] = lab[i][j];
			tmp[i][j] = 0;
		}
	}
}

// BFS로 바이러스를 퍼뜨림
void BFS()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tmp[i][j] = map[i][j];
		}
	}

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (tmp[i][j] == 2)
			{
				q.push({ i, j });
			}
		}
	}

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (xx < 0 || xx >= n || yy < 0 || yy >= m || tmp[xx][yy] == 2 || tmp[xx][yy] == 1)
			{
				continue;
			}
			tmp[xx][yy] = 2;
			q.push({ xx, yy });
		}
	}

	// 안전구역의 갯수를 구함
	int safeArea= 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (tmp[i][j] == 0)
			{
				safeArea++;
			}
		}
	}

	ans = max(ans, safeArea);
}

// 벽을 3개 만드는 함수
void MakeWall(int cnt)
{
	// 벽이 3개라면 바이러스 퍼뜨리기
	if (cnt == 3)
	{
		BFS();
		return;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 1 || map[i][j] == 2)
			{
				continue;
			}
			map[i][j] = 1;
			MakeWall(cnt + 1);
			map[i][j] = 0;
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
			cin >> lab[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (lab[i][j] == 2 || lab[i][j] == 1)
			{
				continue;
			}
			Init();
			map[i][j] = 1;
			MakeWall(1);
			map[i][j] = 0;
		}
	}
	cout << ans << endl;
	return 0;
}
