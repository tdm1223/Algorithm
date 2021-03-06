// 2302. 극장 좌석
// 2019.05.20
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int a[41];
int d[41]; // d[i] : 연속된 VIP가 아닌 i명이 앉을 수 있는 경우의 수
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		int b;
		cin >> b;
		a[b - 1] = 1;
	}

	d[0] = 1;
	d[1] = 1;
	d[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}

	// 곱하는거라 1로 초기화해줌.
	int ans = 1;
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			count++;
		}
		// VIP라면 여태껏 쌓인 count의 경우의수를 곱함
		else
		{
			ans *= d[count - 1];
			count = 1;
		}
	}
	// 마지막으로 남은 count의 경우의수를 곱해줌
	cout << ans * d[count - 1] << endl;
	return 0;
}
