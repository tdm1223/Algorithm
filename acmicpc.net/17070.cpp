// 17070. 파이프 옮기기 1
// 2020.03.02
// BFS
#include<iostream>
#include<queue>

using namespace std;

int map[17][17];
struct pipe
{
	int x; // x위치
	int y; // y위치
	int dir; // 가로 : 0, 세로 : 1, 대각선 : 2
	pipe(int x, int y, int dir) :x(x), y(y), dir(dir) {}
};
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}

	// BFS
	queue<pipe> q;
	q.push({ 1,2,0 });
	int ans = 0;
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		int dir = q.front().dir;
		q.pop();
		if (x == n && y == n)
		{
			ans++;
		}
		// 가로
		if (dir == 0)
		{
			// 가로 이동
			if (map[x][y + 1] == 0 && y + 1 <= n)
			{
				q.push({ x,y + 1,0 });
			}
			// 대각 이동
			if (map[x + 1][y + 1] == 0 && x + 1 <= n && y + 1 <= n && map[x + 1][y] == 0 && map[x][y + 1] == 0)
			{
				q.push({ x + 1,y + 1,2 });
			}
		}
		// 세로
		else if (dir == 1)
		{
			// 세로 이동
			if (map[x + 1][y] == 0 && x + 1 <= n)
			{
				q.push({ x + 1,y,1 });
			}
			// 대각 이동
			if (map[x + 1][y + 1] == 0 && x + 1 <= n && y + 1 <= n && map[x + 1][y] == 0 && map[x][y + 1] == 0)
			{
				q.push({ x + 1,y + 1,2 });
			}
		}
		// 대각선
		else
		{
			// 가로 이동
			if (map[x][y + 1] == 0 && y + 1 <= n)
			{
				q.push({ x,y + 1,0 });
			}
			// 세로이동
			if (map[x + 1][y] == 0 && x + 1 <= n)
			{
				q.push({ x + 1,y,1 });
			}
			// 대각이동
			if (map[x + 1][y + 1] == 0 && x + 1 <= n && y + 1 <= n && map[x + 1][y] == 0 && map[x][y + 1] == 0)
			{
				q.push({ x + 1,y + 1,2 });
			}
		}
	}
	cout << ans << endl;
	return 0;
}
