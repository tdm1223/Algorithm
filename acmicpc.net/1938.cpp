// 1938. 통나무 옮기기
// 2019.05.19
// BFS
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

// 나무 구조체.
struct Tree
{
	int x, y, z;
	Tree(int x, int y, int z) :x(x), y(y), z(z) {}
	Tree() {}
};

int dx[] = { 1,-1,0,0,0 };
int dy[] = { 0,0,1,-1,0 };
int dz[] = { 0,0,0,0,1 };

// 회전시 9방향 검사
int fx[] = { -1,-1,-1,0,0,0,1,1,1 };
int fy[] = { 1,-1,0,1,-1,0,1,-1,0 };

char a[55][55];
int n, disc[55][55][2];
int chk(int x, int y)
{
	return 0 <= x && x < n && 0 <= y && y < n;
}
bool possible(Tree e, int move)
{
	int x = e.x;
	int y = e.y;
	int z = e.z;
	if (move == 4)
	{
		for (int i = 0; i < 9; i++)
		{
			// 범위 벗어나는지 체크
			if (!chk(x + fx[i], y + fy[i]))
			{
				return false;
			}
			// 1이면 움직일수 없음
			if (a[x + fx[i]][y + fy[i]] == '1')
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		int lx, ly, rx, ry;
		if (z == 1)
		{
			lx = x + 1 + dx[move];
			ly = y + dy[move];
			rx = x - 1 + dx[move];
			ry = y + dy[move];
			x += dx[move], y += dy[move];
			if (chk(lx, ly) && chk(x, y) && chk(rx, ry) && a[lx][ly] != '1'&&a[rx][ry] != '1'&&a[x][y] != '1')
			{
				return true;
			}
		}
		else
		{
			lx = x + dx[move];
			ly = y + 1 + dy[move];
			rx = x + dx[move];
			ry = y - 1 + dy[move];
			x += dx[move];
			y += dy[move];
			if (chk(lx, ly) && chk(x, y) && chk(rx, ry) && a[lx][ly] != '1'&&a[rx][ry] != '1'&&a[x][y] != '1')
			{
				return true;
			}
		}
	}
	return false;
}
Tree s, e;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			// 시작점(B)찾기
			if (a[i][j] == 'B')
			{
				if (chk(i - 1, j) && chk(i + 1, j) && a[i - 1][j] == 'B'&&a[i + 1][j] == 'B')
				{
					s = Tree(i, j, 1);
				}
				if (chk(i, j - 1) && chk(i, j + 1) && a[i][j - 1] == 'B'&&a[i][j + 1] == 'B')
				{
					s = Tree(i, j, 0);
				}
			}
			// 도착점(E) 찾기
			if (a[i][j] == 'E')
			{
				if (chk(i - 1, j) && chk(i + 1, j) && a[i - 1][j] == 'E'&&a[i + 1][j] == 'E')
				{
					e = Tree(i, j, 1);
				}
				if (chk(i, j - 1) && chk(i, j + 1) && a[i][j - 1] == 'E'&&a[i][j + 1] == 'E')
				{
					e = Tree(i, j, 0);
				}
			}
		}
	}

	queue<Tree> qu;
	disc[s.x][s.y][s.z] = 1;
	qu.push(s);
	int ans = 0;
	while (qu.size())
	{
		int qs = qu.size();
		while (qs--)
		{
			Tree here = qu.front();
			qu.pop();
			// BBB->EEE 도착 완료
			if (here.x == e.x&&here.y == e.y&&here.z == e.z)
			{
				cout << ans << endl;
				return 0;
			}
			for (int i = 0; i < 5; i++)
			{
				if (!possible(here, i))
				{
					continue;
				}
				int nx = here.x + dx[i];
				int ny = here.y + dy[i];
				int nz = here.z^dz[i]; // 뒤집기
				if (disc[nx][ny][nz])
				{
					continue;
				}
				disc[nx][ny][nz] = 1;
				qu.push(Tree(nx, ny, nz));
			}
		}
		ans++;
	}
	cout << 0 << endl;
	return 0;
}
