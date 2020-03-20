// 1788. 피보나치 수의 확장
// 2019.05.18
// 수학, 구현
#include<iostream>

using namespace std;

int d[1000001]; // d[i] : i번쨰 피보나치수
int main()
{
	int n;
	cin >> n;
	int tmp = n;
	if (n < 0) tmp *= -1;
	d[0] = 0;
	d[1] = 1;
	for (int i = 2; i <= tmp; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 1000000000;
	}

	if (n < 0) // n이 음수
	{
		n *= -1;
		if (n % 2 == 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << 1 << endl;
		}
	}
	else if (n>0) // n이 양수
	{
		cout << 1 << endl;
	}
	else // 0
	{
		cout << 0 << endl;
	}
	cout << d[n] << endl;
	return 0;
}
