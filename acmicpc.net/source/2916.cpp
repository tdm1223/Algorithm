// 2916. 자와 각도기
// 2019.09.04
// 다이나믹 프로그래밍
#include<iostream>
#include<queue>

using namespace std;

int n, k;
int d[361];
int a[11];
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	queue<int> q;
	q.push(0);
	d[0] = 1;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < n; i++)
		{
			// 두 각을 더함
			if (x + a[i] <= 360 && d[x + a[i]] == 0)
			{
				d[x + a[i]] = 1;
				q.push(x + a[i]);
			}
			if (x + a[i] >= 360 && d[x + a[i] - 360] == 0)
			{
				d[x + a[i] - 360] = 1;
				q.push(x + a[i] - 360);
			}

			// 두 각을 뺌
			if (x - a[i] >= 0 && d[x - a[i]] == 0)
			{
				d[x - a[i]] = 1;
				q.push(x - a[i]);
			}
			if (x - a[i] <= 0 && d[x - a[i] + 360] == 0)
			{
				d[x - a[i] + 360] = 1;
				q.push(x - a[i] + 360);
			}
		}
	}

	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		if (d[x])
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
