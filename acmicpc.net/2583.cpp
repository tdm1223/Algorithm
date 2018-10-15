// 2583. 영역 구하기
// 2018.10.15
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int arr[101][101]; // 영역
bool visit[101][101]; //방문 여부

//상하좌우
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int n, m, k;

int DFS(int x, int y)
{
	int cnt = 1;
	for (int i = 0; i < 4; i++)
	{
		int yy = y + dy[i];
		int xx = x + dx[i];

		if (yy < 0 || yy >= m || xx < 0 || xx >= n)
		{
			continue;
		}

		if (!arr[xx][yy] && !visit[xx][yy])
		{
			visit[xx][yy] = 1;
			cnt += DFS(xx, yy);
		}
	}
	return cnt;
}

int main()
{
	cin >> n >> m >> k;

	int count = 0;

	for (int i = 0; i < k; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		for (int j = b; j < d; j++)
		{
			for (int l = a; l < c; l++)
			{
				arr[j][l] = 1;
			}
		}
	}

	vector<int> area;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visit[i][j] && !arr[i][j])
			{
				visit[i][j] = 1;
				area.push_back(DFS(i, j));
			}
		}
	}

	sort(area.begin(), area.end());
	cout << area.size() << endl;
	for (int i = 0; i < area.size(); i++)
	{
		cout << area[i] << " ";
	}
	return 0;
}
