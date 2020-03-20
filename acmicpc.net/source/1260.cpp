// 1260. DFS와 BFS
// 2019.05.14
// DFS, BFS
#include<iostream>
#include<queue>

using namespace std;

int arr[1001][1001];
bool visit[1001];
void DFS(int v, int n)
{
	visit[v] = true;
	cout << v << " ";
	for (int i = 1; i <= n; i++)
	{
		if (arr[v][i] == 1 && visit[i] == false)
		{
			DFS(i, n);
		}
	}
}

void BFS(int v, int n)
{
	queue<int> q;
	visit[v] = true;
	q.push(v);
	cout << v << " ";
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		for (int i = 0; i <= n; i++)
		{
			if (arr[temp][i] == 1 && visit[i] == false)
			{
				q.push(i);
				visit[i] = true;
				cout << i << " ";
			}
		}
	}
}

int main(void)
{
	int n, m, v;
	cin >> n >> m >> v;

	while (m > 0)
	{
		m--;
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	DFS(v, n);
	cout << endl;

	for (int i = 0; i < 1001; i++)//방문여부 초기화
	{
		visit[i] = false;
	}

	BFS(v, n);
	cout << endl;

	return 0;
}
