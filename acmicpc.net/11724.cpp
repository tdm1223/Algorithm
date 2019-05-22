// 11724. 연결 요소의 개수
// 2019.05.22
// BFS, DFS
#include<iostream>

using namespace std;

int arr[1001][1001];
int visit[1001]; //방문 유무
int n, m;

void DFS(int x)
{
	visit[x] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (!visit[i] && arr[x][i])
		{
			DFS(i);
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!visit[i])
		{
			count++;
			DFS(i);
		}
	}

	cout << count << endl;
	return 0;
}
