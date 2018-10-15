// 11053. 가장 긴 증가하는 부분 수열
// 2018.10.15
#include<iostream>
#include<algorithm>

using namespace std;

int a[1001];
int d[1001]; // d[i] : 수열의 i항까지 가장 긴 증가하는 부분 수열의 길이

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		d[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				d[i] = max(d[i], d[j] + 1);
			}
		}
		ans = max(ans, d[i]);
	}

	cout << ans << endl;
	return 0;
}
