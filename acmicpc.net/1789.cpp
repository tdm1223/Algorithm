// 1789. 수들의 합
// 2018.10.14
#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long ans = 1;

	while (1)
	{
		if (n - ans >= 0)
		{
			n -= ans;
		}
		ans++;
		if (n - ans < 0)
		{
			break;
		}
	}

	cout << ans - 1 << endl;
	return 0;
}
