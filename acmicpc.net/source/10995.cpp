// 10995. 별 찍기 - 20
// 2019.05.22
// 별 찍기
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 1)
	{
		cout << "*" << endl;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 == 1)
			{
				for (int j = 1; j <= 2*n; j++)
				{
					if (j % 2 == 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << endl;
			}
			else
			{
				for (int j = 1; j <= 2 * n; j++)
				{
					if (j % 2 == 1)
					{
						cout << " ";
					}
					else
					{
						cout << "*";
					}
				}
				cout << endl;
			}
		}
	}
	return 0;
}
