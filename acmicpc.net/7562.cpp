// 7562. 나이트의 이동
// 2018.10.15
#include<iostream>
#include<queue>

using namespace std;

//나이트가 이동할 수 있는 8가지 방향
int dx[8] = { -2,-1,1,2,2,1,-1,-2 };
int dy[8] = { 1,2,2,1,-1,-2,-2,-1 };

bool visit[301][301]; //방문 유무
int dist[301][301]; //거리
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				visit[i][j] = 0;
			}
		}

		//(x,y) : 나이트의 현재 있는 칸.
		//(a,b) : 나이트가 이동하려고 하는 칸.
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		queue<pair<int, int>> q;
		q.push({ x, y });
		visit[x][y] = 1;
		dist[x][y] = 0;

		while (!q.empty())
		{
			int first = q.front().first;
			int second = q.front().second;
			q.pop();

			if (first == a && second == b)
			{
				break;
			}

			for (int i = 0; i < 8; i++)
			{
				//이동할 수 있는 8가지 경우에 대해 조사
				int xx = first + dx[i];
				int yy = second + dy[i];

				//범위 벗어나면 무시
				if (xx < 0 || yy < 0 || xx >= n || yy >= n)
				{
					continue;
				}

				//방문하지 않았을때
				if (!visit[xx][yy])
				{
					visit[xx][yy] = 1; //방문으로 표시
					dist[xx][yy] = dist[first][second] + 1; //거리 1증가
					q.push({ xx, yy }); //그 위치 큐에 넣음
				}
			}
		}
		cout << dist[a][b] << endl;
	}

	return 0;
}
