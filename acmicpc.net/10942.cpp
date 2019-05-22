// 10942. 팰린드롬?
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int a[2001];
int d[2001][2001]; // d[i][j] : i부터 j까지 팰린드롬이면 1, 아니면 0
int main()
{
	int n, m;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}

	// 길이가 1인 경우는 모두 팰린드롬
	for (int i = 1; i <= n; i++)
	{
		d[i][i] = 1;
	}

	// 길이가 2인 경우는 둘이 같다면 팰린드롬
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i] == a[i + 1])
		{
			d[i][i + 1] = 1;
		}
	}

	// 길이가 3이상
	for (int k = 3; k <= n; k++)
	{
		for (int i = 1; i <= n - k + 1; i++)
		{
			int j = i + k - 1;
			// 앞뒤가 같고 그 사이의 수가 펠린드롬이라면 팰린드롬
			if (a[i] == a[j] && d[i + 1][j - 1] == 1)
			{
				d[i][j] = 1;
			}
		}
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int from, to;
		scanf("%d %d", &from, &to);
		printf("%d\n", d[from][to]);
	}
	return 0;
}
