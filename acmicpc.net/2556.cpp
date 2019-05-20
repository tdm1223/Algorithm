// 2556. 별 찍기 - 14
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
		for (int j = 1; j <= n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
