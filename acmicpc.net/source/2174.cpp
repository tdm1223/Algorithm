// 2174. 로봇 시뮬레이션
// 2019.05.19
// 시뮬레이션
#include<iostream>
#include<vector>

using namespace std;

// 상 우 하 좌
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int map[101][101];
struct robot
{
	int x;
	int y;
	int dir;
};
struct order
{
	int num;
	char dir;
	int count;
};
vector<robot> robots;
vector<order> orders;
int main()
{
	int a, b, n, m;
	cin >> a >> b >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		int x, y;
		char ch;
		cin >> x >> y >> ch;
		int dir = 0;
		switch (ch)
		{
		case 'N':
			dir = 0;
			break;
		case 'W':
			dir = 3;
			break;
		case 'E':
			dir = 1;
			break;
		case 'S':
			dir = 2;
			break;
		}
		map[b + 1 - y][x] = i;
		robots.push_back({ b + 1 - y,x,dir });
	}

	for (int i = 0; i < m; i++)
	{
		int num, count;
		char dir;
		cin >> num >> dir >> count;
		orders.push_back({ num,dir,count });
	}

	for (int i = 0; i < m; i++)
	{
		int num = orders[i].num;
		int dir = orders[i].dir;
		int count = orders[i].count;
		switch (dir)
		{
		case 'L': // 왼쪽 회전
			count %= 4;
			robots[num-1].dir-=count;
			if (robots[num-1].dir < 0)
			{
				robots[num-1].dir += 4;
			}
			break;
		case 'R': // 오른쪽 회전
			count %= 4;
			robots[num-1].dir+=count;
			if (robots[num-1].dir > 3)
			{
				robots[num-1].dir -= 4;
			}
			break;
		case 'F': // 로봇이 바라보는 방향으로 앞으로 이동
			int x = robots[num-1].x;
			int y = robots[num-1].y;
			int xx = x;
			int yy = y;
			for (int i = 0; i < count; i++)
			{
				xx += dx[robots[num-1].dir];
				yy += dy[robots[num-1].dir];

				// 로봇이 다른 로봇과 충돌했을 때
				if (map[xx][yy] != 0)
				{
					cout << "Robot " << num << " crashes into robot " << map[xx][yy] << endl;
					return 0;
				}

				// 로봇이 벽에 충돌했을 때
				if (xx <= 0 || yy <= 0 || xx > b || yy > a)
				{
					cout << "Robot " << num << " crashes into the wall" << endl;
					return 0;
				}

				robots[num - 1].x = xx;
				robots[num - 1].y = yy;
				map[xx][yy] = num;
				map[x][y] = 0;
				x = xx;
				y = yy;
			}
			break;
		}
	}
	// 시뮬레이션의 문제가 없는 경우
	cout << "OK" << endl;
	return 0;
}
