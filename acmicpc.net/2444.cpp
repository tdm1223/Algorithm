// 2019.03.02
// 2444. 별 찍기 - 7
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	// 위 절반
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// 나머지
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * (n - i) - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
