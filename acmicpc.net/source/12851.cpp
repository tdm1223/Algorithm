// 12851. 숨바꼭질 2
// 2019.08.05
// BFS
#include<iostream>
#include<queue>

using namespace std;

bool visit[200001]; // 방문 유무 저장
int dist[200001]; // dist[i] : i에 도착하는 가장 빠른 시간
long long cnt[200001]; // cnt[i] : 가장 빠른 시간으로 i를 찾는 방법의 개수

int main()
{
	int n, k;
	cin >> n >> k;
	visit[n] = true;
	queue<int> q;
	q.push(n);
	cnt[n] = 1;
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		if (now - 1 >= 0) // x-1로 이동
		{
			if (visit[now - 1] == false)
			{
				q.push(now - 1);
				visit[now - 1] = true;
				dist[now - 1] = dist[now] + 1;
				cnt[now - 1] = cnt[now];
			}
			else if (dist[now - 1] == dist[now] + 1)
			{
				cnt[now - 1] += cnt[now];
			}
		}
		if (now + 1 <= 200000) // x+1로 이동
		{
			if (visit[now + 1] == false)
			{
				q.push(now + 1);
				visit[now + 1] = true;
				dist[now + 1] = dist[now] + 1;
				cnt[now + 1] = cnt[now];
			}
			else if (dist[now + 1] == dist[now] + 1)
			{
				cnt[now + 1] += cnt[now];
			}
		}
		if (now * 2 <= 200000) // 순간이동
		{
			if (visit[now * 2] == false)
			{
				q.push(now * 2);
				visit[now * 2] = true;
				dist[now * 2] = dist[now] + 1;
				cnt[now * 2] = cnt[now];
			}
			else if (dist[now * 2] == dist[now] + 1)
			{
				cnt[now * 2] += cnt[now];
			}
		}
	}

	cout << dist[k] << "\n" << cnt[k]<<"\n";

	return 0;
}
