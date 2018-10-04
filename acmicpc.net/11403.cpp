// 11403.경로 찾기
#include<iostream>
#include<queue>

using namespace std;

int visit[101][101];
int main()
{
	int n;
	cin >> n;
	int v[101][101];
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
			if (v[i][j] == 1)
			{
				q.push(j);
			}
		}
		while (!q.empty())
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
