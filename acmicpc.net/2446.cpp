// 2446. 별 찍기 - 9
// 2019.03.15
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int k = 2 * n - 1;
	// 위 절반
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i - 1; j++)
		{
			cout << " ";
		}
		for (int j = k; j >= 1; j--)
		{
			cout << "*";
		}
		k -= 2;
		cout << endl;
	}

	// 아래 절반
	k = 3;
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = n - i - 1; j >= 1; j--)
		{
			cout << " ";
		}
		for (int j = 1; j <= k; j++)
		{
			cout << "*";
		}
		k += 2;
		cout << endl;
	}
	return 0;
}
