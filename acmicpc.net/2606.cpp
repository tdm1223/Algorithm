// 2606. 바이러스
// 2019.05.20
// 플로이드 와샬 알고리즘
#include<iostream>
#include<queue>

using namespace std;

int computer[101][101];
int visit[101]; // visit[i] = 1이면 컴퓨터 i는 바이러스에 걸린상태
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		int x, y;
		cin >> x >> y;
		computer[x][y] = 1;
		computer[y][x] = 1;
	}

	visit[1] = 1;
	queue<int> q;
	q.push(1);
	while (!q.empty())
	{
		int top = q.front();
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (computer[top][i] == 1 && visit[i] == 0)
			{
				visit[i] = 1;
				q.push(i);
			}
		}
	}

	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		if (visit[i] == 1)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
