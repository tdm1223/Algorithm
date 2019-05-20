// 2522. 별 찍기 - 12
// 2019.05.20
// 별 찍기
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// 위 절반
	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j >= 1; j--)
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
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = n - i; j >= 1; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
