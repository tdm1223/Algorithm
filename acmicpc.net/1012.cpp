// 1012. 유기농 배추
// 2018.10.14
#include<iostream>

using namespace std;

int arr[51][51];
bool visit[51][51]; //방문 유무를 나타내는 배열 1:방문, 0:방문안함

//상 하 좌 우
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int n, m, k;

void DFS(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx < 0 || xx >= n || yy < 0 || yy >= m)
		{
			continue;
		}

		if (arr[xx][yy] && !visit[xx][yy])
		{
			visit[xx][yy] = 1;
			DFS(xx, yy);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> n >> m >> k;
		//초기화
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				arr[i][j] = 0;
				visit[i][j] = 0;
			}
		}
		int count = 0;
		for (int i = 0; i < k; i++)
		{
			int a, b;
			cin >> a >> b;
			arr[a][b] = 1;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (!visit[i][j] && arr[i][j])
				{
					count++;
					visit[i][j] = 1;
					DFS(i, j);
				}
			}
		}
		cout << count << endl;
	}

	return 0;
}
