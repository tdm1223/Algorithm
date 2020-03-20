// 1720. 타일 코드
// 2019.05.18
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int d[31];
int main()
{
	d[1] = 1;
	d[2] = 3;
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2] * 2;
	}

	if (n == 1) // 1 일때는 1
	{
		cout << d[1] << endl;
	}
	else if (n % 2 == 0) // 짝수 일때
	{
		cout << (d[n] + d[n / 2 + 1]) / 2 << endl;
	}
	else // 홀수 일때
	{
		cout << (d[n] + d[n / 2]) / 2 << endl;
	}
	return 0;
}
