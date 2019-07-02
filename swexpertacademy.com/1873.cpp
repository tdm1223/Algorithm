// 1873. 상호의 배틀필드
// 2019.07.02
#include<iostream>
#include<string>

using namespace std;

// U D L R
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
char map[21][21];
char tank;
int xPos;
int yPos;
int h;
int w;
void move(int dir, int x, int y)
{
	int xx = x + dx[dir];
	int yy = y + dy[dir];
	if (xx >= h || yy >= w || xx < 0 || yy < 0 || map[xx][yy] != '.')
	{
		return;
	}
	else
	{
		map[x][y] = '.';
		map[xx][yy] = tank;
		xPos = xx;
		yPos = yy;
	}
}

void shoot(char tank, int x, int y)
{
	int xx = x;
	int yy = y;
	int dir = 0;
	switch (tank)
	{
	case '^':
		dir = 0;
		break;
	case 'v':
		dir = 1;
		break;
	case '<':
		dir = 2;
		break;
	case '>':
		dir = 3;
		break;
	}
	while (true)
	{
		xx += dx[dir];
		yy += dy[dir];
		if (xx >= h || yy >= w || xx < 0 || yy < 0)
		{
			break;
		}
		else if (map[xx][yy] == '*')
		{
			map[xx][yy] = '.';
			break;
		}
		else if (map[xx][yy] == '#')
		{
			break;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		cin >> h >> w;
		string line[21];
		for (int i = 0; i < h; i++)
		{
			cin >> line[i];
		}
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				map[i][j] = line[i][j];
				if (map[i][j] == '<' || map[i][j] == '^' || map[i][j] == 'v' || map[i][j] == '>')
				{
					xPos = i;
					yPos = j;
					tank = map[i][j]; // 초기 탱크 모양 저장
				}
			}
		}

		int length;
		cin >> length;
		string order;
		cin >> order;
		for (int i = 0; i < length; i++)
		{
			switch (order[i])
			{
			case 'U':
				move(0, xPos, yPos);
				tank = '^';
				map[xPos][yPos] = '^';
				break;
			case 'D':
				move(1, xPos, yPos);
				tank = 'v';
				map[xPos][yPos] = 'v';
				break;
			case 'L':
				move(2, xPos, yPos);
				tank = '<';
				map[xPos][yPos] = '<';
				break;
			case 'R':
				move(3, xPos, yPos);
				tank = '>';
				map[xPos][yPos] = '>';
				break;
			case 'S':
				shoot(tank, xPos, yPos);
				break;
			}
		}
		cout << "#" << testCase << " ";
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cout << map[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
