// 1986. 체스
// 2019.04.14
#include<iostream>
#include<vector>

using namespace std;

int map[1001][1001];
// 나이트의 이동
int dx[8] = { -2,-2,-1,1,2,2,1,-1 };
int dy[8] = { -1,1,2,2,1,-1,-2,-2 };
// 퀸의이동
int dx2[8] = { -1,-1,-1,0,1,1,1,0 };
int dy2[8] = { -1,0,1,1,1,0,-1,-1 };
struct chess
{
	int x;
	int y;
	int type; // 1.나이트 2.퀸
};
vector<chess> v;
int main()
{
	int n, m;
	cin >> n >> m;

	// 퀸
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int x, y;
		cin >> x >> y;
		map[x][y] = 2;
		v.push_back({ x,y,2 });
	}

	// 나이트
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
		v.push_back({ x,y,1 });
	}

	// 폰
	int p;
	cin >> p;
	for (int i = 0; i < p; i++)
	{
		int x, y;
		cin >> x >> y;
		map[x][y] = 3;
	}

	for (int i = 0; i < v.size(); i++)
	{
		// 퀸
		if (v[i].type == 2)
		{
			int x = v[i].x;
			int y = v[i].y;
			for (int j = 0; j < 8; j++)
			{
				int cnt = 1;
				while (1)
				{
					int xx = x + dx2[j] * cnt;
					int yy = y + dy2[j] * cnt;
					if (xx <= 0 || yy <= 0 || xx > n || yy > m || map[xx][yy] == 2 || map[xx][yy] == 3 || map[xx][yy] == 1)
					{
						break;
					}
					map[xx][yy] = 4;
					cnt++;
				}
			}
		}
		// 나이트
		else if (v[i].type == 1)
		{
			int x = v[i].x;
			int y = v[i].y;
			for (int j = 0; j < 8; j++)
			{
				int xx = x + dx[j];
				int yy = y + dy[j];
				if (xx <= 0 || yy <= 0 || xx > n || yy > m || map[xx][yy] != 0)
				{
					continue;
				}
				map[xx][yy] = 3;
			}
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (map[i][j] == 0)
			{
				ans++;
			}
		}
	}
	cout << ans << "\n";

	return 0;
}
