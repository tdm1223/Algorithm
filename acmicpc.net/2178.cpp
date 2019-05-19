// 2178. 미로 탐색
// 2019.05.19
// BFS
#include<iostream>
#include<string>
#include<queue>

using namespace std;

int arr[101][101];
int dist[101][101]; // dist[xx][yy] : xx,yy에 도달하는데 필요한 최소 칸 수
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = s[j] - '0';
		}
	}

	queue<pair<int, int>> q;
	dist[0][0] = 1;
	q.push({ 0, 0 }); // 시작점을 넣어줌
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx < 0 || yy < 0 || xx >= n || yy >= m)
			{
				continue;
			}

			// 아직 도달한적이 없고 미로의 값이 1일때(이동할 수 있을때)
			if (dist[xx][yy] == 0 && arr[xx][yy] == 1)
			{
				dist[xx][yy] = dist[x][y] + 1;
				q.push({ xx, yy });
			}
		}
	}

	cout << dist[n - 1][m - 1] << endl;
	return 0;
}
