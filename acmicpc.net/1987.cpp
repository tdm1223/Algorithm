// 1987. 알파벳
// 2019.05.19
// DFS, 백트래킹
#include<iostream>

using namespace std;

int r, c;
char map[21][21];
bool visit[26]; // A~Z까지의 방문 여부
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int ans;

void DFS(int x, int y, int cnt)
{
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx < 0 || yy < 0 || xx >= r || yy >= c)
		{
			continue;
		}

		// 다음 위치의 알파벳이 아직 지나온 알파벳이 아닐 경우
		if (!visit[map[xx][yy] - 'A'])
		{
			visit[map[xx][yy] - 'A'] = true;
			DFS(xx, yy, cnt + 1);
			// 찾는게 끝나면 원래대로 돌림
			visit[map[xx][yy] - 'A'] = false;
		}
		else
		{
			if (ans < cnt)
			{
				ans = cnt;
			}
		}
	}
}
int main()
{
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> map[i][j];
		}
	}

	// 시작점과 시작점의 방문을 true로 만듦
	int x = 0;
	int y = 0;
	visit[map[x][y] - 'A'] = true;
	DFS(x, y, 1);

	cout << ans << endl;
	return 0;
}
