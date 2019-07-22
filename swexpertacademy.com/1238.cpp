// 1238. Contact
// 2019.07.22
#include<iostream>
#include<queue>

using namespace std;

int relation[101][101]; // 관계 저장
int visit[101]; // visit[i] : i가 연락받은 시간
int main()
{
	for (int testCase = 1; testCase <= 10; testCase++)
	{
		fill(visit, visit + 101, 0);
		for (int i = 0; i <= 100; i++)
		{
			fill(relation[i], relation[i] + 101, 0);
		}
		int a, b;
		cin >> a >> b;

		for (int i = 0; i < a; i += 2)
		{
			int x, y;
			cin >> x >> y;
			relation[x][y] = 1;
		}

		// BFS
		queue<int> q;
		q.push(b);
		visit[b] = 0;
		while (!q.empty())
		{
			int front = q.front();
			q.pop();
			for (int i = 1; i <= 100; i++)
			{
				if (relation[front][i] == 1 && visit[i] == 0)
				{
					q.push(i);
					visit[i] = visit[front] + 1;
				}
			}
		}

		int max = 0;
		int ans = 0;
		for (int i = 1; i <= 100; i++)
		{
			if (max <= visit[i])
			{
				max = visit[i];
				ans = i;
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
