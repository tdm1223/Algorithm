// 12761. 돌다리
// 2019.05.22
// BFS
#include<iostream>
#include<queue>

using namespace std;

int dist[100001];
bool visit[100001];
int main()
{
	int a, b, n, m;
	cin >> a >> b >> n >> m;
	queue<int> q;
	visit[n] = true;
	q.push(n);
	// n->m까지 BFS사용
	// 조건에 나온 8가지 이동 경우의 수를 모두 따져서 조건에 맞으면 큐에 넣는다..
	while (!q.empty())
	{
		int front = q.front();
		q.pop();
		// +1칸 이동
		if (front + 1 < 100001 && !visit[front + 1])
		{
			q.push(front + 1);
			visit[front + 1] = true;
			dist[front + 1] = dist[front] + 1;
		}
		// -1칸 이동
		if (front - 1 > -1 && !visit[front - 1])
		{
			q.push(front - 1);
			visit[front - 1] = true;
			dist[front - 1] = dist[front] + 1;
		}
		// +a칸 이동
		if (front + a < 100001 && !visit[front + a])
		{
			q.push(front + a);
			visit[front + a] = true;
			dist[front + a] = dist[front] + 1;
		}
		// -a칸 이동
		if (front - a > -1 && !visit[front - a])
		{
			q.push(front - a);
			visit[front - a] = true;
			dist[front - a] = dist[front] + 1;
		}
		// +b칸 이동
		if (front + b < 100001 && !visit[front + b])
		{
			q.push(front + b);
			visit[front + b] = true;
			dist[front + b] = dist[front] + 1;
		}
		// -b칸 이동
		if (front - b > -1 && !visit[front - b])
		{
			q.push(front - b);
			visit[front - b] = true;
			dist[front - b] = dist[front] + 1;
		}
		// a배 이동
		if (front * a < 100001 && !visit[front * a])
		{
			q.push(front * a);
			visit[front * a] = true;
			dist[front * a] = dist[front] + 1;
		}
		// b배 이동
		if (front * b < 100001 && !visit[front * b])
		{
			q.push(front * b);
			visit[front * b] = true;
			dist[front * b] = dist[front] + 1;
		}
	}
	cout << dist[m] << endl;
	return 0;
}
