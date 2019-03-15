// 2445. 별 찍기 - 8
// 2019.03.15
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// 위 절반
	int k = 2 * n;
	for (int i = 1; i <= n; i++)
	{
		k -= 2;
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= k; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// 아래 절반
	k = 0;
	for (int i = n - 1; i >= 1; i--)
	{
		k += 2;
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= k; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
