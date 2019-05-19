// 1952. 달팽이2
// 2019.05.19
// 시뮬레이션
#include<iostream>

using namespace std;

//방향은 오른쪽 -> 아래 -> 왼쪽 -> 위 순으로만 진행한다.
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int visit[101][101];
int main()
{
	int n, m;
	cin >> n >> m;
	int x = 0;
	int y = 0;
	int dir = 0;
	int count = 0;
	while (1)
	{
		if (visit[x][y] == 1)
		{
			break;
		}

		visit[x][y] = 1;

		int xx = x + dx[dir];
		int yy = y + dy[dir];

		if (visit[xx][yy] == 1 || xx < 0 || yy < 0 || xx >= m || yy >= n)
		{
			dir = (dir + 1) % 4;
			// 올바른 방향으로 이동 값 다시 갱신
			xx = x + dx[dir];
			yy = y + dy[dir];
			count++;
		}

		x = xx;
		y = yy;
	}
	cout << count - 1 << endl;
	return 0;
}
