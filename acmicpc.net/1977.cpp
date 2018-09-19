// 1977. 완전제곱수
#include <iostream>

using namespace std;

int a[10001];
int main()
{
	for (int i = 1; i < 101; i++)
	{
		a[i*i] = 1;
	}
	int m, n;
	cin >> m >> n;
	int min = 0;
	int sum = 0;
	for (int i = m; i <= n; i++)
	{
		if (a[i] == 1)
		{
			if (min == 0)
			{
				min = i;
			}
			sum += i;
		}
	}
	if (min == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << sum << endl << min << endl;
	}
}
