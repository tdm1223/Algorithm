// 2294. 동전 2
// 2019.05.20
// 다이나믹 프로그래밍
#include<iostream>
#include<algorithm>

using namespace std;

int a[101];
int d[10001]; // d[i] : i원을 만드는 동전의 최소 개수
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	// 최댓값으로 초기화
	for (int i = 1; i <= k; i++)
	{
		d[i] = 10001;
	}

	d[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = a[i]; j <= k; j++)
		{
			d[j] = min(d[j], d[j - a[i]] + 1);
		}
	}
	// 불가능한 경우
	if (d[k] == 10001)
	{
		d[k] = -1;
	}
	cout << d[k] << endl;
	return 0;
}
