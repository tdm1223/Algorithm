// 2573. 빙산
// 2019.05.20
// BFS
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int map[301][301];
int visit[301][301];
// 빙산 구조체
struct iceberg
{
	int x; // x위치
	int y; // y위치
	int height; // 높이
};
queue<iceberg> icebergs;
queue<iceberg> nextIcebergs;
bool flag;
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] != 0)
			{
				icebergs.push({ i,j,map[i][j] });
			}
		}
	}

	int ans = 0;
	while (1)
	{
		ans++;
		for (int i = 0; i < 301; i++)
		{
			fill(visit[i], visit[i] + 301, 0);
		}
		while (!icebergs.empty())
		{
			int height = icebergs.front().height;
			int ix = icebergs.front().x;
			int iy = icebergs.front().y;
			icebergs.pop();
			for (int j = 0; j < 4; j++)
			{
				int x = ix + dx[j];
				int y = iy + dy[j];
				if (x < 0 || y < 0 || x >= n || y >= m)
				{
					continue;
				}

				if (map[x][y] == 0)
				{
					height--;
				}
			}
			// 녹은값을 저장한 빙산들의 정보를 next에 넣어줌.
			nextIcebergs.push({ ix,iy,height });
		}

		// nextIcebergs에있는걸 icebergs로 넣어줌
		while (!nextIcebergs.empty())
		{
			// 값이 0보다 클때(빙산이 존재할때)만 넣어준다.
			if (nextIcebergs.front().height > 0)
			{
				icebergs.push(nextIcebergs.front());
				map[nextIcebergs.front().x][nextIcebergs.front().y] = nextIcebergs.front().height;
				nextIcebergs.pop();
			}
			// 값이 0이하면 녹아 없어진것이므로 맵의 값만 0으로 바꾸고 icebergs에 넣어주진 않는다.
			else
			{
				map[nextIcebergs.front().x][nextIcebergs.front().y] = 0;
				nextIcebergs.pop();
			}
		}

		// 다 녹을때까지 분리되지 않았다면 0출력
		if (icebergs.empty())
		{
			cout << 0 << endl;
			return 0;
		}
		// 2개로 나누어졌는지 체크
		else
		{
			// icebergs에 맨앞에 들어있는 정보를 기준으로 BFS로 visit 표시
			queue<pair<int, int>> q;
			q.push({ icebergs.front().x , icebergs.front().y });
			visit[icebergs.front().x][icebergs.front().y] = 1;
			while (!q.empty())
			{
				int x = q.front().first;
				int y = q.front().second;
				q.pop();
				for(int i=0;i<4;i++)
				{
					int xx = x + dx[i];
					int yy = y + dy[i];
					if (xx < 0 || yy < 0 || xx >= n || yy >= m || map[xx][yy]==0)
					{
						continue;
					}

					if (!visit[xx][yy])
					{
						visit[xx][yy] = 1;
						q.push({ xx,yy });
					}
				}
			}

			// icebergs를 순회하면서 만일 visit값이 0이 아니면 위의 BFS에서 방문하지 않았으므로 2개이상으로 나누어진것.
			for (int i = 0; i < icebergs.size(); i++)
			{
				// 나누어졌다면 ans 출력
				if (visit[icebergs.front().x][icebergs.front().y]==0)
				{
					cout << ans << endl;
					return 0;
				}
				icebergs.push(icebergs.front());
				icebergs.pop();
			}
		}
	}

	return 0;
}
