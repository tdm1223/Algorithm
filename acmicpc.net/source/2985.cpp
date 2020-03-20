// 2985. 세 수
// 2019.08.21
// 조합론
#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 0:
			if (a + b == c)
			{
				cout << a << "+" << b << "=" << c << endl;
				return 0;
			}
			break;
		case 1:
			if (a - b == c)
			{
				cout << a << "-" << b << "=" << c << endl;
				return 0;
			}
			break;
		case 2:
			if (a * b == c)
			{
				cout << a << "*" << b << "=" << c << endl;
				return 0;
			}
			break;
		case 3:
			if (a / b == c)
			{
				cout << a << "/" << b << "=" << c << endl;
				return 0;
			}
			break;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 0:
			if (a == b + c)
			{
				cout << a << "=" << b << "+" << c << endl;
				return 0;
			}
			break;
		case 1:
			if (a == b - c)
			{
				cout << a << "=" << b << "-" << c << endl;
				return 0;
			}
			break;
		case 2:
			if (a == b * c)
			{
				cout << a << "=" << b << "*" << c << endl;
				return 0;
			}
			break;
		case 3:
			if (a == b / c)
			{
				cout << a << "=" << b << "/" << c << endl;
				return 0;
			}
			break;
		}
	}
	return 0;
}
