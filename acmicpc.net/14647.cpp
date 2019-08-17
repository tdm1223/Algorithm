// 14647. 준오는 조류혐오야!!
// 2019.08.17
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
int map[502][502];
int main()
{
	cin >> n >> m;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int k;
			cin >> k;
			int cnt = 0;
			while (k > 0)
			{
				if (k % 10 == 9)
				{
					cnt++;
				}
				k /= 10;
			}
			map[i][j] = cnt;
			ans += cnt;
		}
	}

	int sumMax = 0; // 행 또는 열의 9가 가장 많이 들어있는 개수
  // 행 계산
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += map[i][j];
		}
		sumMax = max(sumMax, sum);
	}

  // 열 계산
	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += map[j][i];
		}
		sumMax = max(sumMax, sum);
	}

	cout << ans - sumMax << endl;
	return 0;
}
