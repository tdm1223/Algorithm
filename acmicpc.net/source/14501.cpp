// 14501. 퇴사
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int t[16];
int p[16];
int d[16]; // d[i] : n-i일에 얻을 수 있는 최대 이익

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t[i] >> p[i];
	}

	// 마지막날부터 첫째날까지 거꾸로 비교
	for (int i = n - 1; i > -1; i--)
	{
		// 범위를 초과한다면 그대로 값 유지
		if (i + t[i] > n)
		{
			d[i] = d[i + 1];
		}
		// 범위 안일 경우 그 값과 이전값중 최댓값 사용
		else
		{
			d[i] = max(d[i + 1], d[i + t[i]] + p[i]);
		}
	}
	cout << d[0] << endl;
	return 0;
}
