// 1726. 로봇
// 2019.08.29
// BFS
#include<iostream>
#include<queue>

using namespace std;

int map[101][101];
int dist[101][101][5];
int dx[5] = { -1, 0,0,1,-1 };
int dy[5] = { -1, 1,-1,0,0 };
struct pos {
	int x;
	int y;
	int dir;
};
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			fill(dist[i][j], dist[i][j] + 5, -1);
		}
	}
	pos start; // 출발점과 방향
	pos end; // 도착점과 방향
	cin >> start.x >> start.y >> start.dir;
	cin >> end.x >> end.y >> end.dir;

	queue<pos> q;
	q.push(start);
	dist[start.x][start.y][start.dir] = 0;
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		int dir = q.front().dir;
		q.pop();

		// 도착점에 도달했을때 종료
		if (x == end.x && y == end.y && dir == end.dir)
		{
			cout << dist[x][y][dir] << endl;
			break;
		}
		// 바라보고 있는 방향으로 1~3칸 이동
		for (int i = 1; i <= 3; i++)
		{
			int xx = x + dx[dir] * i;
			int yy = y + dy[dir] * i;

			// 더이상 이동할 수 없을때 종료함
			if (xx<1 || yy<1 || xx>n || yy>m || map[xx][yy] == 1)
			{
				break;
			}

			if (dist[xx][yy][dir] == -1 && map[xx][yy] == 0)
			{
				dist[xx][yy][dir] = dist[x][y][dir] + 1;
				q.push({ xx,yy,dir });
			}
		}

		// 바라보고 있는 방향에서 왼쪽이나 오른쪽으로 회전
		switch (dir)
		{
		case 1:
		case 2:
			if (dist[x][y][3] == -1)
			{
				dist[x][y][3] = dist[x][y][dir] + 1;
				q.push({ x,y,3 });
			}
			if (dist[x][y][4] == -1)
			{
				dist[x][y][4] = dist[x][y][dir] + 1;
				q.push({ x,y,4 });
			}
			break;
		case 3:
		case 4:
			if (dist[x][y][1] == -1)
			{
				dist[x][y][1] = dist[x][y][dir] + 1;
				q.push({ x,y,1 });
			}
			if (dist[x][y][2] == -1)
			{
				dist[x][y][2] = dist[x][y][dir] + 1;
				q.push({ x,y,2 });
			}
			break;
		}
	}
	return 0;
}
