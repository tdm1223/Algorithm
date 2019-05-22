// 10992. 별 찍기 - 17
// 2019.05.22
// 별 찍기
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
		// 마지막줄은 전부 출력
		else if (i == n)
		{
			for (int j = 1; j <= 2 * i - 1; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			cout << "*";
			for (int j = 1; j <= k; j++)
			{
				cout << " ";
			}
			k += 2;
			cout << "*";
			cout << endl;
		}
	}
	return 0;
}
