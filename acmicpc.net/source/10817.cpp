// 10817. 세 수
// 2019.05.22
// 입문용
#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 0;
	// if문을 이용해서 두 번째로 큰 정수를 찾는다.
	if (a >= b)
	{
		if (b >= c)
		{
			ans = b;
		}
		else if (b <= c)
		{
			if (a >= c)
			{
				ans = c;
			}
			else
			{
				ans = a;
			}
		}
	}
	else
	{
		if (b >= c)
		{
			if (a >= c)
			{
				ans = a;
			}
			else
			{
				ans = c;
			}
		}
		else
		{
			ans = b;
		}
	}
	cout << ans << endl;
	return 0;
}
