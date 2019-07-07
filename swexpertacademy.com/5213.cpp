// 5213. 진수의 홀수 약수
// 2019.07.07
#include<iostream>

using namespace std;

int arr[1000001];
long long d[1000001]; // d[i] : (i의 약수 중 1부터 i까지 홀수의 합)의 누적(1부터 i까지)
int main()
{
	// 주어진 범위까지 미리 계산해둔다.
	for (int i = 1; i < 1000001; i += 2)
	{
		for (int j = 1; i * j < 1000001; j++)
		{
			arr[i * j] += i;
		}
	}
	for (int i = 1; i < 1000001; i++)
	{
		d[i] = d[i - 1] + arr[i];
	}

	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		long ans = d[b] - d[a - 1];
		cout << "#" << testCase << " " << ans << "\n";
	}
	return 0;
}
