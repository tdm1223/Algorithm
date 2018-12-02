// 14503. 로봇 청소기
// 2018.12.02
#include<iostream>

using namespace std;

int map[51][51];
int ans = 1;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m;
void DFS(int x, int y, int d)
{
	int xx, yy;
	int dir = d;

	for (int i = 0; i < 4; i++) //총 4방향으로 이동할 수 있으므로 4번 돌림
	{
		dir = (dir + 3) % 4;    // 북,서,남,동(0,3,2,1) 순서로 변경
		xx = x + dx[dir];
		yy = y + dy[dir];

		// 이동한 칸이 벽
		if (xx > n - 2 || xx < 1 || yy > m - 2 || yy < 1 || map[xx][yy] == 1)
		{
			continue;
		}

		// 청소 하지 않았다면
		if (map[xx][yy] == 0)
		{
			ans++;    //청소하고 카운트 증가
			map[xx][yy] = 2;  //청소했다고 표시
			DFS(xx, yy, dir);  //다음칸 방문을 위해 DFS함수 호출
			return;
		}
	}
	// 4방향의 칸 중 방문할 칸이 없으면 후진
	dir = (d + 2) % 4;     // 후진을 위한 방향 설정
	xx = x + dx[dir];
	yy = y + dy[dir];

	// 벽일 경우 중단
	if (map[xx][yy] == 1)
	{
		return;
	}
	else
	{
		DFS(xx, yy, d);
	}
}
int main()
{
	int d, x, y;
	cin >> n >> m >> x >> y >> d;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}
	// 현재 위치를 청소한다.
	map[x][y] = 2;
	DFS(x, y, d);
	cout << ans << endl;
	return 0;
}
