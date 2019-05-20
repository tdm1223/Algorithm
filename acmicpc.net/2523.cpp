// 2523. 별 찍기 - 13
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
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	// 아래 절반
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
