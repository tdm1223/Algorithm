// 2606. 바이러스
#include <iostream>
#include<queue>
using namespace std;

int com[101][101];
int check[101];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		int x, y;
		cin >> x >> y;
		com[x][y] = 1;
		com[y][x] = 1;
	}
	check[1] = 1;
	queue<int> q;
	q.push(1);
	while (!q.empty())
	{
		int top = q.front();
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (com[top][i] == 1 && check[i] == 0)
			{
				check[i] = 1;
				q.push(i);
			}
		}
	}
	int count = 0;
	for (int i = 2; i <= n; i++)
		if (check[i] == 1) count++;
	cout << count << endl;
	return 0;
}
