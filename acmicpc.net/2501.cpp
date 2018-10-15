// 2501. 약수 구하기
// 2018.10.15
#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int count = 0;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			count++;
			if (count == k)
			{
				ans = i;
				break;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
