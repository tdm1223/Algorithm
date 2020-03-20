// 2548. 대표 자연수
// 2019.10.29
// 입문용
#include<iostream>
#include<cmath>

using namespace std;

int a[20001];
int minSum = 0;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	// 기저값인 대표자연수가 1일때 합을 계산
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		minSum += abs(a[i] - cnt);
	}
	cnt++;
	while (1)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += abs(a[i] - cnt);
		}
		// 대표자연수로 계산한 값이 현재 저장되어있는 합보다 크거나 같으면 종료
		// 이전에 1을 더해줬기 때문에 1을 빼준다.
		if (minSum <= sum)
		{
			cnt--;
			break;
		}
		else
		{
			minSum = sum;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
