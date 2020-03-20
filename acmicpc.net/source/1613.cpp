// 1613. 역사
// 2019.05.18
// 플로이드 와샬 알고리즘
#include<iostream>

using namespace std;

int d[401][401];
int main()
{
	int n, m;
	int from, to;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &from, &to);
		// 대소방향을 나타내기 위해 1과 -1로 저장
		d[from][to] = -1;
		d[to][from] = 1;
	}

	// 1>2, 2>3 일때 1>3인 경우들을 찾는 과정
	for (int i = 1; i <= n; i++)
	{
		for (int from = 1; from <= n; from++)
		{
			for (int to = 1; to <= n; to++)
			{
				if (d[from][to] == 0)
				{
					if (d[from][i] + d[i][to] == 0)
					{
						continue;
					}
					else if (d[from][i] == -1 && d[i][to] == -1)
					{
						d[from][to] = -1;
					}
					else if (d[from][i] == 1 && d[i][to] == 1)
					{
						d[from][to] = 1;
					}
				}
			}
		}
	}

	int s;
	scanf("%d", &s);
	for (int i = 0; i < s; i++)
	{
		scanf("%d %d", &from, &to);
		printf("%d\n", d[from][to]);
	}

	return 0;
}
