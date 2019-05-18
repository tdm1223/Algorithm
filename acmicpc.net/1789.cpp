// 1789. 수들의 합
// 2019.05.18
// 수학, 구현
#include<iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long ans = 1;

	// 1부터 순서대로 n에서 빼면서 0보다 작아지는 최소값을 찾음.
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
