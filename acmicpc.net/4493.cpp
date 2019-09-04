// 4493. 가위 바위 보?
// 2019.09.04
// 입문용
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int p1 = 0;
		int p2 = 0;
		int draw = 0;

		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			char x, y;
			cin >> x >> y;

			if (x == 'R')
			{
				if (y == 'R')
				{
					draw++;
				}
				else if (y == 'S')
				{
					p1++;
				}
				else
				{
					p2++;
				}
			}
			else if (x == 'S')
			{
				if (y == 'R')
				{
					p2++;
				}
				else if (y == 'S')
				{
					draw++;
				}
				else
				{
					p1++;
				}
			}
			else if (x == 'P')
			{
				if (y == 'R')
				{
					p1++;
				}
				else if (y == 'S')
				{
					p2++;
				}
				else
				{
					draw++;
				}
			}
		}
		if (p1 > p2)
		{
			cout << "Player 1" << endl;
		}
		else if (p2 > p1)
		{
			cout << "Player 2" << endl;
		}
		else
		{
			cout << "TIE" << endl;
		}
	}
	return 0;
}
