// 11053. 가장 긴 증가하는 부분 수열
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>
#include<algorithm>

using namespace std;

int a[1001]; // 수열이 담긴 배열
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
				// 기존에 저장된 값과 d[j]+1중 최댓값
				d[i] = max(d[i], d[j] + 1);
			}
		}
		// 기존에 저장된 값과 d[i]중 최댓 값
		ans = max(ans, d[i]);
	}
	cout << ans << endl;
	return 0;
}
