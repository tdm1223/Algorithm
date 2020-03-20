// 방문길이
// 2019.06.28
#include<string>

using namespace std;

int map[11][11][11][11]; // map[x][y][w][z] : x,y에서 w,z의 이동을 했는지
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int solution(string dirs)
{
	int answer = 0;
	int x = 5;
	int y = 5;
	for (int i = 0; i < dirs.size(); i++)
	{
		int xx = x;
		int yy = y;

		// 이동방향 순서대로 체크
		switch (dirs[i])
		{
		case 'L':
			xx = x + dx[1];
			yy = y + dy[1];
			if (xx < 0 || yy < 0 || xx>10 || yy>10)
			{
				x = x;
				yy = y;
				break;
			}
			if (map[x][y][xx][yy] == 1) // 이미 한번 지나간곳
			{
				x = xx;
				y = yy;
			}
			else
			{
				map[x][y][xx][yy] = 1;
				map[xx][yy][x][y] = 1;
				x = xx;
				y = yy;
				answer++;
			}
			break;
		case 'U':
			xx = x + dx[3];
			yy = y + dy[3];
			if (xx < 0 || yy < 0 || xx>10 || yy>10)
			{
				xx = x;
				yy = y;
				break;
			}
			if (map[x][y][xx][yy] == 1) // 이미 한번 지나간곳
			{
				x = xx;
				y = yy;
			}
			else
			{
				map[x][y][xx][yy] = 1;
				map[xx][yy][x][y] = 1;
				x = xx;
				y = yy;
				answer++;
			}
			break;
		case 'R':
			xx = x + dx[0];
			yy = y + dy[0];
			if (xx < 0 || yy < 0 || xx>10 || yy>10)
			{
				xx = x;
				yy = y;
				break;
			}
			if (map[x][y][xx][yy] == 1) // 이미 한번 지나간곳
			{
				x = xx;
				y = yy;
			}
			else
			{
				map[x][y][xx][yy] = 1;
				map[xx][yy][x][y] = 1;
				x = xx;
				y = yy;
				answer++;
			}
			break;
		case 'D':
			xx = x + dx[2];
			yy = y + dy[2];
			if (xx < 0 || yy < 0 || xx>10 || yy>10)
			{
				xx = x;
				yy = y;
				break;
			}
			if (map[x][y][xx][yy] == 1) // 이미 한번 지나간곳
			{
				x = xx;
				y = yy;
			}
			else
			{
				map[x][y][xx][yy] = 1;
				map[xx][yy][x][y] = 1;
				x = xx;
				y = yy;
				answer++;
			}
			break;
		}
	}
	return answer;
}
