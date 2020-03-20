// 3234. 준환이의 양팔저울
// 2019.07.14
#include<iostream>

using namespace std;

int arr[10];
int k[10];
int test, n, ans, m;
int go(int p, int right, int left, bool *visit)
{
	if (p >= n)
	{
		ans++;
		return 0;
	}

	int tmp = m / 2;
	if (tmp % 2 == 1)
	{
		tmp += 1;
	}

	if (right > tmp)
	{
		int pos = n - p;
		if (pos != 0)
		{
			ans += k[pos];
		}
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			go(p + 1, right + arr[i], left, visit);
			if (left + arr[i] <= right)
			{
				go(p + 1, right, left + arr[i], visit);
			}
			visit[i] = false;
		}
	}
	return 0;
}

int main()
{
	scanf("%d", &test);
	int cnt = 2;
	k[0] = 1;
	for (int i = 1; i <= 8; i++)
	{
		k[i] = k[i - 1] * cnt;
		cnt += 2;
	}

	for (int testCase = 1; testCase <= test; testCase++)
	{
		bool visit[10]; // 사용 유무 저장
		ans = 0;
		m = 0;
		scanf("%d", &n);
		fill(arr, arr + 10, 0);
		fill(visit, visit + 10, 0);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
			m += arr[i];
		}
		go(0, 0, 0, visit);
		printf("#%d %d\n", testCase, ans);
	}
	return 0;
}
