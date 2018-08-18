#include <iostream>

using namespace std;

int main()
{
	int ans = 0;
	int n;
	cin >> n;
	int a[3];
	for (int i = 1; i <= n; i++)
	{
		if (i < 100) ans = i; //두자리 수는 모두 한수
		else if (i == 1000) break;
		else //100~999
		{
			int k = 0;
			int tmp = i;
			while (tmp > 0)
			{
				a[k] = tmp % 10;
				tmp /= 10;
				k++;
			}
			if (a[0] - a[1] == a[1] - a[2])
				ans++;
		}
	}

	cout << ans << endl;
}