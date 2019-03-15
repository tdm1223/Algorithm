// 10990. 별 찍기 - 15
// 2019.03.15
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int k = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		// 첫번째줄은 1개 출력
		if (i == 1)
		{
			cout << "*" << endl;
		}
		else
		{
			cout << "*";
			for (int j = 1; j <= k; j++)
			{
				cout << " ";
			}
			k += 2;
			cout << "*" << endl;
		}
	}
	return 0;
}
