// 17394. 핑거 스냅
// 2019.08.12
// BFS
#include<iostream>
#include<queue>

using namespace std;

int prime[100001]; // prime[i] : i가 소수인지 아닌지 나타내는 배열
int visit[1000001]; // visit[i] : i의 방문 유무를 나타내는 배열
int main()
{
	// 소수가 아닌것은 0으로 바꾼다.
	fill(prime, prime + 100001, 1);
	prime[1] = 0;
	for (int i = 2; i * i <= 100000; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 100000; j += i)
			{
				prime[j] = 0;
			}
		}
	}

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, a, b;
		cin >> n >> a >> b;

		fill(visit, visit + 1000001, 0);
		queue<int> q;
		q.push(n);
		visit[n] = 0;
		bool flag = false;
		while (!q.empty())
		{
			int front = q.front();
			q.pop();
			if ((front >= a && front <= b) && prime[front] == 1)
			{
				cout << visit[front] << "\n";
				flag = true;
				break;
			}
			// 전 우주의 생명체 수를 절반으로
			if (front / 2 > 0 && !visit[front / 2])
			{
				visit[front / 2] = visit[front] + 1;
				q.push(front / 2);
			}
			// 전 우주의 생명체 수를 1/3으로
			if (front / 3 > 0 && !visit[front / 3])
			{
				visit[front / 3] = visit[front] + 1;
				q.push(front / 3);
			}
			// 생명체수 +1
			if (front + 1 <= 1000000 && !visit[front + 1])
			{
				visit[front + 1] = visit[front] + 1;
				q.push(front + 1);
			}
			// 생명체수 -1
			if (front - 1 >= 0 && !visit[front - 1])
			{
				visit[front - 1] = visit[front] + 1;
				q.push(front - 1);
			}
		}
		// 목표범위 내의 소수로 만들 수없을때
		if (!flag)
		{
			cout << -1 << "\n";
		}
	}

	return 0;
}
