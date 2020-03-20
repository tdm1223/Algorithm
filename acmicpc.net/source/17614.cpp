// 17614. 369
// 2019.10.19
// 구현
#include<iostream>

using namespace std;

int check(int i)
{
	int k = 0;
	while (i > 0)
	{
		int x = i % 10;
		if (x == 3 || x == 6 || x == 9)
		{
			k++;
		}
		i /= 10;
	}
	return k;
}

int main()
{
	int ans = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		ans += check(i);
	}
	cout << ans << endl;
	return 0;
}
