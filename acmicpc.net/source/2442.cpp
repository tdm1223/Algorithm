// 2442. 별 찍기 - 5
// 2019.05.20
// 별 찍기
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j >= 1; j--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i * 2 - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
