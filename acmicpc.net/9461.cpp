// 9461. 파도반 수열
// 분류 : 다이나믹 프로그래밍
// 2018.12.16
#include<iostream>

using namespace std;

long long d[101]; //d[i] : i에 대한 나선에 있는 정삼각형의 변의 길이
int main()
{
	int t;
	cin >> t;
	d[0] = 1;
	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	d[4] = 2;
	d[5] = 2;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		for (int i = 6; i <= n; i++)
		{
			d[i] = d[i - 1] + d[i - 5];
		}
		cout << d[n] << endl;
	}
	return 0;
}
