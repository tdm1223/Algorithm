// 1614. 영식이의 손가락
// 2019.05.18
// 수학, 브루트 포스, 시뮬레이션, 탐색
#include<iostream>

using namespace std;

int main()
{
	int n;
	long long l;
	cin >> n >> l;
	long long ans = 0;
	if (n == 1) // 엄지 손가락
	{
		ans = 8 * l;
	}
	else if (n == 5) // 새끼 손가락
	{
		ans = 8 * l + 4;
	}
	else // 나머지
	{
		if (l % 2 == 1)
		{
			ans = 4 * l + (5 - n);
		}
		else
		{
			ans = 4 * l + (n - 1);
		}
	}
	cout << ans << endl;
	return 0;
}
