// 10026. 적록색약
// 2018.10.17
#include<iostream>

using namespace std;

char a[101][101];
int visit[101][101];

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int n;
void DFS(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		//범위를 벗어날때 무시
		if (xx < 0 || yy < 0 || xx >= n || yy >= n)
		{
			continue;
		}

		//방문하였거나 칠해진 색이 다를때 무시
		if (visit[xx][yy] == 1 || a[x][y] != a[xx][yy])
		{
			continue;
		}

		visit[xx][yy] = 1;
		DFS(xx, yy);
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visit[i][j] == 0)
			{
				visit[i][j] = 1;
				count++;
				DFS(i, j);
			}
		}
	}

	//적록색맹이 볼수 있는 색으로 바꾸면서 visit배열도 같이 0으로 초기화
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 'R')
			{
				a[i][j] = 'G';
			}
			visit[i][j] = 0;
		}
	}

	int count2 = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visit[i][j] == 0)
			{
				visit[i][j] = 1;
				count2++;
				DFS(i, j);
			}
		}
	}

	cout << count <<" "<<count2<< endl;
	return 0;
}
