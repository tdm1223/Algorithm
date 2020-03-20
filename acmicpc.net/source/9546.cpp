// 9546. 3000번 버스
// 2019.05.22
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t, k;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> k;
		int ans = 0;
		// 정거장이 1개면 손님은 1명
		if (k == 1)
		{
			ans = k;
		}
		// 정거장이 1개가 아니고 k개면 손님은 2^k-1명
		else
		{
			ans = pow(2, k) - 1;
		}
		cout << ans << endl;
	}
	return 0;
}
