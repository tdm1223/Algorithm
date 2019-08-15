// 16959. 체스판 여행 1
// 2019.08.15
// BFS
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

// 나이트
int dx[8] = { -2,-2,2,2,-1,1,-1,1 };
int dy[8] = { -1,1,-1,1,-2,-2,2,2 };

// 비숍
int dx2[4] = { -1,-1,1,1 };
int dy2[4] = { -1,1,-1,1 };

// 룩
int dx3[4] = { 1,-1,0,0 };
int dy3[4] = { 0,0,-1,1 };

int map[11][11]; // 체스판
int d[11][11][121][3]; // d[i][j][k][l] : k인 수에 있고 현재 말이 l일때 (i,j)에 도달하는 최소 시간
struct chess {
	int x;
	int y;
	int num;
	int type;
};
int main()
{
	int n;
	cin >> n;
	// 초기화
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			for (int k = 0; k < 121; k++)
			{
				for (int l = 0; l < 3; l++)
				{
					d[i][j][k][l] = -1;
				}
			}
		}
	}

	// 입력
	queue<chess> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
			map[i][j]--;
			// 시작점 추가
			if (map[i][j] == 0)
			{
				for (int k = 0; k < 3; k++)
				{
					d[i][j][0][k] = 0;
					q.push({ i,j,0,k });
				}
			}
		}
	}

	int ans = -1;
	// BFS
	// 0 부터 n*n-1까지
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		int num = q.front().num;
		int type = q.front().type;
		q.pop();

		if (num == n * n - 1)
		{
			if (ans == -1 || ans > d[x][y][num][type])
			{
				ans = d[x][y][num][type];
			}
		}

		// 말을 바꿈
		for (int i = 0; i < 3; i++)
		{
			if (type == i)
			{
				continue;
			}
			if (d[x][y][num][i] == -1)
			{
				d[x][y][num][i] = d[x][y][num][type] + 1;
				q.push({ x,y,num,i });
			}
		}

		// 나이트
		if (type == 0)
		{
			for (int i = 0; i < 8; i++)
			{
				int xx = x + dx[i];
				int yy = y + dy[i];
				if (xx >= n || yy >= n || xx < 0 || yy < 0)
				{
					continue;
				}
				int nextNum = num;
				if (map[xx][yy] == num + 1)
				{
					nextNum = num + 1;
				}
				if (d[xx][yy][nextNum][type] == -1)
				{
					d[xx][yy][nextNum][type] = d[x][y][num][type] + 1;
					q.push({ xx,yy,nextNum,type });
				}
			}
		}
		// 비숍
		else if (type == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				int cnt = 1;
				while (1)
				{
					int xx = x + dx2[i] * cnt;
					int yy = y + dy2[i] * cnt;
					if (xx >= n || yy >= n || xx < 0 || yy < 0)
					{
						break;
					}
					int nextNum = num;
					if (map[xx][yy] == num + 1)
					{
						nextNum = num + 1;
					}
					if (d[xx][yy][nextNum][type] == -1)
					{
						d[xx][yy][nextNum][type] = d[x][y][num][type] + 1;
						q.push({ xx,yy,nextNum,type });
					}
					cnt++;
				}

			}
		}
		// 룩
		else
		{
			for (int i = 0; i < 4; i++)
			{
				int cnt = 1;
				while (1)
				{
					int xx = x + dx3[i] * cnt;
					int yy = y + dy3[i] * cnt;
					if (xx >= n || yy >= n || xx < 0 || yy < 0)
					{
						break;
					}
					int nextNum = num;
					if (map[xx][yy] == num + 1)
					{
						nextNum = num + 1;
					}
					if (d[xx][yy][nextNum][type] == -1)
					{
						d[xx][yy][nextNum][type] = d[x][y][num][type] + 1;
						q.push({ xx,yy,nextNum,type });
					}
					cnt++;
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}
