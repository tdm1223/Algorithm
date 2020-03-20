// 1865. 동철이의 일 분배
// 2019.07.17
// 브루트 포스
#include<iostream>
#include<algorithm>

using namespace std;

double task[17][17];
bool visit[17];
int n;
double ans;

// 일을 분배하는 모든 경우의 수를 확인
void go(int cnt, double tmp)
{
	if (cnt == n)
	{
		ans = max(tmp, ans);
		return;
	}

	double t = tmp;

	for (int i = 0; i < n; i++)
	{
		if (!visit[i] && tmp * task[cnt][i] > ans)
		{
			visit[i] = true;
			go(cnt + 1, tmp * task[cnt][i]);
			tmp = t;
			visit[i] = false;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++) {
		cin >> n;
		for (int i = 0; i < 17; i++)
		{
			fill(task[i], task[i] + 17, 0.0);
		}
		fill(visit, visit + 17, 0);
		ans = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> task[i][j];
				task[i][j] *= 0.01;
			}
		}

		go(0, 100);
		printf("#%d %.6f\n", testCase, ans);
	}
	return 0;
}
