// 2458. 키 순서
// 2019.05.20
// 플로이드 와샬 알고리즘
#include<iostream>

using namespace std;

int d[501][501];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int from, to;
		cin >> from >> to;
		// 대소방향을 나타내기 위해 1과 -1로 저장
		d[from][to] = 1;
		d[to][from] = -1;
	}

	// 1>2, 2>3 일때 1>3인 경우들을 찾는 과정
	for (int i = 1; i <= n; i++)
	{
		for (int from = 1; from <= n; from++)
		{
			for (int to = 1; to <= n; to++)
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

	// 자신이 키가 몇 번째인지 알 수 있는 학생의 수 출력.
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == 0 && (i != j))
			{
				break;
			}
			if (j == n)
			{
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
