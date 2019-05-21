// 7576. 토마토
// 2019.05.21
// BFS
#include<iostream>
#include<queue>

using namespace std;

int map[1000][1000];
int visit[1000][1000];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int n, m;
queue<pair<int, int>> q;
int cnt;
int BFS()
{
	int ans = 1;
	int x, y;
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; ++i)
		{
			pair<int, int> temp = q.front();
			q.pop();
			x = temp.first;
			y = temp.second;

			//이미 방문했다면 다음으로넘어감
			if (visit[x][y])
			{
				continue;
			}
			else
			{
				visit[x][y] = 1;
			}

			for (int j = 0; j < 4; ++j)
			{
				int xx = x + dx[j];
				int yy = y + dy[j];

				if (xx < 0 || xx >= n || yy < 0 || yy >= m || map[xx][yy] == -1)
				{
					continue;
				}
				//익지않은 토마토라면 그 위치를 큐에 넣고 익게함
				else if (map[xx][yy] == 0)
				{
					q.push({ xx,yy });
					map[xx][yy] = 1;
					cnt--;
				}
				// 익지않은 토마토가 없을 때
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
	cin >> m >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> map[i][j];
			// 익은 토마토들은 미리 넣어둠
			if (map[i][j] == 1)
			{
				q.push({ i,j });
			}
			// 익지않은 토마토의 갯수를 셈.
			else if (map[i][j] == 0)
			{
				cnt++;
			}
		}
	}
	if (cnt == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << BFS() << endl;
	}
	return 0;
}
