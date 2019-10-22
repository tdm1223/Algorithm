// 17780. 새로운 게임
// 2019.10.23
// 구현
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, k;
int map[13][13];
vector<int> check[13][13];
int dx[5] = { 0,0,0,-1,1 };
int dy[5] = { 0,1,-1,0,0 };

struct chess {
	int x;
	int y;
	int dir;
};
// 방향 바꾸는 함수
int changeDir(int dir)
{
	int d = 0;
	switch (dir)
	{
	case 1:
		d = 2;
		break;
	case 2:
		d = 1;
		break;
	case 3:
		d = 4;
		break;
	case 4:
		d = 3;
		break;
	}
	return d;
}
// 체스말 이동하는 함수
void move(int x, int y, int xx, int yy, vector<chess>& chessGroup)
{
	// 빨간색 칸
	if (map[xx][yy] == 1)
	{
		for (int i = check[x][y].size() - 1; i >= 0; i--)
		{
			check[xx][yy].push_back(check[x][y][i]);
			chessGroup[check[x][y][i]].x = xx;
			chessGroup[check[x][y][i]].y = yy;
		}
	}
	// 흰색 칸
	else if (map[xx][yy] == 0)
	{
		for (int i = 0; i < check[x][y].size(); i++)
		{
			check[xx][yy].push_back(check[x][y][i]);
			chessGroup[check[x][y][i]].x = xx;
			chessGroup[check[x][y][i]].y = yy;
		}
	}
	check[x][y].clear();
}

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}

	vector<chess> chessGroup(k);
	for (int i = 0; i < k; i++)
	{
		int x, y, dir;
		cin >> x >> y >> dir;
		chessGroup[i] = { x, y, dir };
		check[x][y].push_back(i);
	}

	int turn = 1;
	while (1)
	{
		if (turn > 1000)
		{
			break;
		}

		// 말 순서대로 이동
		for (int i = 0; i < k; i++)
		{
			int x = chessGroup[i].x;
			int y = chessGroup[i].y;
			int dir = chessGroup[i].dir;
			// 맨 밑에 있는 말인지 확인
			if (check[x][y].size() > 0 && check[x][y][0] != i)
			{
				continue;
			}
			// 이동할수 있는지 체크
			int xx = x + dx[dir];
			int yy = y + dy[dir];
			// 이동하려는 칸이 파란색이거나 벗어날때
			if (xx <= 0 || yy <= 0 || xx > n || yy > n || map[xx][yy] == 2)
			{
				// 방향을 바꾸고 바꾼 방향으로 이동하려는칸을 다시 선택
				chessGroup[i].dir = changeDir(dir);
				xx = x + dx[chessGroup[i].dir];
				yy = y + dy[chessGroup[i].dir];
				// 다시 선택했는데도 이동이 불가능하면 무시
				if (xx <= 0 || yy <= 0 || xx > n || yy > n || map[xx][yy] == 2)
				{
					continue;
				}
				else
				{
					move(x, y, xx, yy, chessGroup);
				}
			}
			else
			{
				move(x, y, xx, yy, chessGroup);
			}
		}

		// 모두 이동 완료
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (check[i][j].size() >= 4)
				{
					cout << turn << endl;
					return 0;
				}
			}
		}
		turn++;
	}
	cout << -1 << endl;
	return 0;
}
