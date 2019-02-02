// 6593. 상범 빌딩
// 2019.02.02
#include<iostream>
#include<queue>

using namespace std;

int m, n, h;
// 왼쪽, 오른쪽, 앞, 뒤, 위, 아래
int dx[6] = { 1,-1,0,0,0,0 };
int dy[6] = { 0,0,1,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };
struct position // 위치를 표현하는 구조체
{
	int x, y, z;
};

position startPos; // 시작점
position endPos; // 끝점
int main()
{
	while (1)
	{
		char map[31][31][31];
		int visit[31][31][31] = { 0, };

		cin >> n >> m >> h;
		if (m == 0 && n == 0 && h == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				for (int k = 0; k < h; k++)
				{
					cin >> map[i][j][k];
					if (map[i][j][k] == 'S')
					{
						startPos.x = i;
						startPos.y = j;
						startPos.z = k;
					}
					if (map[i][j][k] == 'E')
					{
						endPos.x = i;
						endPos.y = j;
						endPos.z = k;
					}
				}
			}
		}

		queue<position> q;
		q.push({ startPos.x,startPos.y,startPos.z });
		while (!q.empty())
		{
			position pos = q.front();
			q.pop();
			int x = pos.x;
			int y = pos.y;
			int z = pos.z;

			// 6가지 방향에 대해서 검사
			for (int j = 0; j < 6; j++)
			{
				int xx = x + dx[j];
				int yy = y + dy[j];
				int zz = z + dz[j];
				// 범위를 벗어난 칸, 지나갈수 없는 칸, 이미 방문기록이 있는 칸은 무시
				if (xx < 0 || xx >= n || yy < 0 || yy >= m || zz < 0 || zz >= h || map[xx][yy][zz] == '#' || visit[xx][yy][zz])
				{
					continue;
				}

				visit[xx][yy][zz] = visit[x][y][z] + 1;
				q.push({ xx,yy,zz });
			}
		}

		// 도착점의 값이 있다면 그 값을 출력하고 아니면 탈출할수 없음.
		if (visit[endPos.x][endPos.y][endPos.z] > 0)
		{
			cout << "Escaped in " << visit[endPos.x][endPos.y][endPos.z] << " minute(s)." << endl;
		}
		else
		{
			cout << "Trapped!" << endl;
		}
	}
	return 0;
}
