// 17618. 신기한 수
// 2019.10.21
// 입문용
#include<iostream>

using namespace std;

int check(int n)
{
	int sum = 0;
	int x = n;
	while (x > 0)
	{
		sum += x % 10;
		x /= 10;
	}
	if (n%sum == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		ans+=check(i);
	}
	cout << ans << endl;
	return 0;
}
