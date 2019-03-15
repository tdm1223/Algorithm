// 2441. 별 찍기 - 4
// 2019.03.15
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			cout << " ";
		}
		for (int j = i + 1; j <= n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
