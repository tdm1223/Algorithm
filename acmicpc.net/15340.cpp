// 15340. Sim Card
// 2019.09.12
// 구현, 영어문제
#include<iostream>
#include<algorithm>

using namespace std;

int c[3] = { 30,35,40 };
int d[3] = { 40,30,20 };
int main()
{
	while (1)
	{
		int a, b;
		cin >> a >> b;

		if (a == 0 && b == 0)
		{
			break;
		}

		int ans = 987654321;
		for (int i = 0; i < 3; i++)
		{
			ans = min(ans, (a*c[i] + b * d[i]));
		}
		cout << ans << endl;
	}
	return 0;
}
