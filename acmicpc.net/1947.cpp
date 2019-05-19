// 1947. 선물 전달
// 2019.05.19
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

long long d[1000001];
int main()
{
	int n;
	cin >> n;
	d[1] = 0;
	d[2] = 1;
  //완전 순열 공식 사용 !n = n * !(n-1) + (-1)^n
	for (int i = 3; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			d[i] = d[i - 1] * i + 1;
			d[i] %= 1000000000;
		}
		else
		{
			d[i] = d[i - 1] * i - 1;
			d[i] %= 1000000000;
		}
	}
  // 완전 순열 공식 사용 !n = (n-1)x(!(n-1) + !(n-2))
	//for (int i = 3; i <= n; i++)
	//{
	//	d[i] = ((i - 1)*(d[i - 1] + d[i - 2])) % 1000000000;
	//}
	cout << d[n] << endl;
	return 0;
}
