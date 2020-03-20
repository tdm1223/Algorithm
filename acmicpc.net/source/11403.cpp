// 11403.경로 찾기
// 2019.05.22
// BFS, DFS, 플로이드 와샬 알고리즘
#include<iostream>
#include<queue>

using namespace std;

int visit[101][101]; // 방문유무를 저장하는 배열
int v[101][101];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> v[i][j];
		}
	}

	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] == 1) // 각 행을 조사하면서 값이 1인것을 먼저 다 넣음
			{
				q.push(j);
			}
		}
		while (!q.empty()) // BFS
		{
			int tmp = q.front();
			q.pop();
			for (int j = 0; j < n; j++)
			{
				if (v[tmp][j] == 1 && visit[i][j] == 0)
				{
					v[i][j] = 1;
					visit[i][j] = 1;
					q.push(j);
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
