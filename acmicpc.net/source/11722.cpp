// 11722. 가장 긴 감소하는 부분 수열
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>
#include<vector>

using namespace std;

int a[1001];
int d[1001]; // d[i] : i까지 가장 긴 감소하는 부분 수열의 길이
int main()
{
	int n;
	int max = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		int min = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i] < a[j])
			{
				if (min < d[j])
				{
					min = d[j];
				}
			}
		}
		d[i] = min + 1;
		if (max < d[i])
		{
			max = d[i];
		}
	}
	cout << max << endl;
	return 0;
}
