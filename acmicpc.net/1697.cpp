// 1697. 숨바꼭질
#include <iostream>
#include <queue>
using namespace std;

bool visited[200001];
int dist[200001];

int main()
{
	int n, k;
	cin >> n >> k;
	visited[n] = true;
	dist[n] = 0;
	queue<int> q;
	q.push(n);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		if (now - 1 >= 0) //x-1로 이동
		{
			if (visited[now - 1] == false)
			{
				q.push(now - 1);
				visited[now - 1] = true;
				dist[now - 1] = dist[now] + 1;
			}
		}
		if (now + 1 <= 200000) //x+1로 이동
		{
			if (visited[now + 1] == false)
			{
				q.push(now + 1);
				visited[now + 1] = true;
				dist[now + 1] = dist[now] + 1;
			}
		}
		if (now * 2 <= 200000) //순간이동
		{
			if (visited[now * 2] == false)
			{
				q.push(now * 2);
				visited[now * 2] = true;
				dist[now * 2] = dist[now] + 1;
			}
		}
	}
	cout << dist[k] << endl;
	return 0;
}
