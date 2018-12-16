// 7569. 토마토
// 2018.12.16
#include<iostream>
#include<queue>

using namespace std;

int m, n, h, cnt;
int tomato[100][100][100];
int visit[100][100][100];

// 왼쪽, 오른쪽, 앞, 뒤, 위, 아래
int dx[6] = { 1,-1,0,0,0,0 };
int dy[6] = { 0,0,1,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };
struct position
{
	int x, y, z;
};
queue<position> q;
int BFS()
{
	// 모든 토마토가 익어있는 상태일때
	if (cnt == 0)
	{
		return 0;
	}
	int ans = 1;
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			position pos = q.front();
			q.pop();
			int x = pos.x;
			int y = pos.y;
			int z = pos.z;
			// 이미 방문 하였다면 무시
			if (visit[x][y][z])
			{
				continue;
			}
			else
			{
				visit[x][y][z] = 1;
			}

			// 6가지 방향에 대해서 검사
			for (int j = 0; j < 6; j++)
			{
				int xx = x + dx[j];
				int yy = y + dy[j];
				int zz = z + dz[j];

				if (xx < 0 || xx >= h ||
					yy < 0 || yy >= n ||
					zz < 0 || zz >= m ||
					tomato[xx][yy][zz] == -1)
				{
					continue;
				}

				if (tomato[xx][yy][zz] == 0)
				{
					q.push({ xx,yy,zz });
					tomato[xx][yy][zz] = 1;
					cnt--;
				}

				if (cnt == 0)
				{
					return ans;
				}
			}
		}
		ans++;
	}
	return -1;
}

int main()
{
	cin >> m >> n >> h;
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				cin >> tomato[i][j][k];
				// 익지않은 토마토의 개수를 저장
				if (tomato[i][j][k] == 0)
				{
					cnt++;
				}
				// 이미 익은 토마토는 BFS를 위해 큐에 삽입
				else if (tomato[i][j][k] == 1)
				{
					q.push({ i,j,k });
				}
			}
		}
	}
	cout << BFS() << endl;
	return 0;
}
