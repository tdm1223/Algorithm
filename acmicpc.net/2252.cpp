// 2252. 줄 세우기
// 2019.09.18
// 위상정렬, 우선순위 큐
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int degree[32001];
vector<int> v[32001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		degree[y]++;
		v[x].push_back(y);
	}

	queue<int> q;
	// 차수가 0인것을 큐에 넣어줌
	for (int i = 1; i <= n; i++)
	{
		if (degree[i] == 0)
		{
			q.push(i);
		}
	}
	while (!q.empty())
	{
		int first = q.front();
		q.pop();
		cout << first << " ";
		for (int i = 0; i < v[first].size(); i++)
		{
			degree[v[first][i]]--;
			if (degree[v[first][i]] == 0)
			{
				q.push(v[first][i]);
			}
		}
	}
	return 0;
}
