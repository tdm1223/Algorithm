// 13549. 숨바꼭질 3
// 2019.05.22
// BFS
#include<iostream>
#include<queue>

using namespace std;

int sec[200001];
bool visit[200001]; // 방문 유무 저장
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
		// 순간이동
		if (now * 2 <= 200000)
		{
			if (visit[now * 2] == false)
			{
				q.push(now * 2);
				visit[now * 2] = true;
				sec[now * 2] = sec[now];
			}
		}
		// x-1로 이동
		if (now - 1 >= 0)
		{
			if (visit[now - 1] == false)
			{
				q.push(now - 1);
				visit[now - 1] = true;
				sec[now - 1] = sec[now] + 1;
			}
		}
		// x+1로 이동
		if (now + 1 <= 200000)
		{
			if (visit[now + 1] == false)
			{
				q.push(now + 1);
				visit[now + 1] = true;
				sec[now + 1] = sec[now] + 1;
			}
		}
	}
	// 결과 출력
	cout << sec[k] << endl;
	return 0;
}
