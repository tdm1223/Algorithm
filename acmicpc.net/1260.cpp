//1260. DFS와 BFS
#include<iostream>
#include<stack>
#include<string>
#include<queue>
using namespace std;

int arr[1001][1001];
bool visited[1001];
void DFS(int v,int n)
{
	visited[v] = true;
	cout << v << " ";
	for (int i = 1; i <= n; i++)
	{
		if (arr[v][i] == 1 && visited[i] == false)
		{
			DFS(i, n);
		}
	}
}

void BFS(int v,int n)
{
	queue<int> q;
	visited[v] = true;
	q.push(v);
	cout << v << " ";
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		for (int i = 0; i <= n; i++)
		{
			if (arr[temp][i] == 1 && visited[i] == false)
			{
				q.push(i);
				visited[i] = true;
				cout << i << " ";
			}
		}
	}
}
int main(void) {
	int n, m, v;
	cin >> n >> m >> v;

	while (m > 0)
	{
		m--;
		int a,b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	DFS(v,n);
	cout << endl;

	for (int i = 0; i < 1001; i++)
		visited[i] = false;

	BFS(v,n);
	cout << endl;

	return 0;
}
