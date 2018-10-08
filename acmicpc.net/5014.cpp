// 5014. 스타트링크
#include<queue>
#include<iostream>

using namespace std;

int visit[1000001];
int dist[1000001];//d[i] : i층을 가기 위해 눌러야 하는 버튼의 수의 최솟값

int main()
{
	int F, S, G, U, D;
	cin >> F >> S >> G >> U >> D;
	queue<int> q;
	q.push(S);
	visit[S] = 1;
	dist[S] = 0;
	int flag = 0; //이동할 수 있는지 없는지를 나타내는 플래그. 이동할 수 있다면 1
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		if (now == G)//목적지 도착
		{
			flag = 1;
			break;
		}
		int direction[2] = { now + U, now - D };
		for (int i = 0; i < 2; i++)
		{
			int next = direction[i];
			if (1 <= next && next <= F)
			{
				if (visit[next])
				{
					continue;
				}
				q.push(next);
				visit[next] = 1;
				dist[next] = dist[now] + 1;
			}
		}
	}

	if (flag)
	{
		cout << dist[G] << endl;
	}
	else
	{
		cout << "use the stairs" << endl;
	}
	return 0;
}
