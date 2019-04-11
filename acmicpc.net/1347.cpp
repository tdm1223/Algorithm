// 1347. 미로 만들기
// 2019.04.11
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// 왼쪽 -1 오른쪽 +1
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };
char map[101][101];
int main()
{
	for (int i = 0; i < 101; i++)
	{
		fill(map[i], map[i] + 101, '#');
	}
	int n;
	string s;
	cin >> n >> s;
	int x = 50;
	int y = 50;
	map[x][y] = '.';
	int dir = 0;// 처음에 남쪽
	for (int i = 0; i < s.size(); i++)
	{
		// 오른쪽 회전
		if (s[i] == 'R')
		{
			dir = (dir + 1) % 4;
		}
		// 왼쪽 회전
		else if (s[i] == 'L')
		{
			dir = dir - 1 < 0 ? 3 : dir - 1;
		}
		// 바라보는 방향으로 앞으로 이동 후 그 자리를 .으로 표시(이동 가능)
		else
		{
			x += dx[dir];
			y += dy[dir];
			map[x][y] = '.';
		}
	}

	// .이 나오는 최소,최대 좌표를 구함
	int minX = 100;
	int maxX = 0;
	int minY = 100;
	int maxY = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (map[i][j] == '.')
			{
				minX = min(minX, i);
				maxX = max(maxX, i);
				minY = min(minY, j);
				maxY = max(maxY, j);
			}
		}
	}
	// 위에서 구한 좌표만큼 map 출력
	for (int i = minX; i <= maxX; i++)
	{
		for (int j = minY; j <= maxY; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}
	return 0;
}
