// 13913. 숨바꼭질 4
// 2019.08.04
// BFS
// https://tdm1223.tistory.com/89
#include<iostream>
#include<queue>

using namespace std;

bool visit[200001]; // 방문 유무 저장
int dist[200001]; // dist[i] : i에 도착하는 가장 빠른 시간
int from[200001]; // from[i] : i가 어디서 왔는지 저장하는 배열
// 경로 출력하는 함수
void Print(int n, int m)
{
	if (n != m)
	{
		Print(n, from[m]);
	}
	cout << m << ' ';
}
int main()
{
	int n, k;
	cin >> n >> k;
	visit[n] = true;
	queue<int> q;
	q.push(n);
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
				from[now - 1] = now;
				dist[now - 1] = dist[now] + 1;
			}
		}
		if (now + 1 <= 200000) // x+1로 이동
		{
			if (visit[now + 1] == false)
			{
				q.push(now + 1);
				visit[now + 1] = true;
				from[now + 1] = now;
				dist[now + 1] = dist[now] + 1;
			}
		}
		if (now * 2 <= 200000) // 순간이동
		{
			if (visit[now * 2] == false)
			{
				q.push(now * 2);
				visit[now * 2] = true;
				from[now * 2] = now;
				dist[now * 2] = dist[now] + 1;
			}
		}
	}

	cout << dist[k] << "\n";
	Print(n, k);
	return 0;
}
