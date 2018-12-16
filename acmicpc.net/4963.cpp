// 4963. 섬의 개수
// 2018.12.16
#include<iostream>

using namespace std;

int visit[51][51];
int a[51][51];
int dx[8] = {-1,-1,0,1,1,1,0,-1};
int dy[8] = {0,1,1,1,0,-1,-1,-1};
int w, h;
void DFS(int x, int y)
{
	visit[x][y] = 1;
	for (int i = 0; i < 8; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx < 0 || yy < 0 || xx >= h || yy >= w)
		{
			continue;
		}

		if (a[xx][yy] == 1 && visit[xx][yy] == 0)
		{
			DFS(xx, yy);
		}
	}
}

int main()
{
	while (1)
	{
		cin >> w >> h;
		if (w == 0 && h == 0)
		{
			break;
		}

		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				visit[i][j] = 0;
			}
		}
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> a[i][j];
			}
		}

		// 섬의 개수를 구함
		int count = 0;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (a[i][j] == 1 && visit[i][j]==0)
				{
					DFS(i, j);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
