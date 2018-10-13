// 1003. 피보나치 함수
// 2018.10.13
#include<iostream>

using namespace std;

int d[40]; // d[n] : 피보나치 n
int fibonacci(int n)
{
	d[0] = 1;
	d[1] = 1;
	if (n <= 1)
	{
		return d[n];
	}
	else
	{
		if (d[n] > 0)
		{
			return d[n];
		}
	}
	return d[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		if (n == 0)
		{
			cout << 1 << " " << 0 << endl;
		}
		else if (n == 1)
		{
			cout << 0 << " " << 1 << endl;
		}
		else
		{
			fibonacci(n);
			cout << d[n - 2] << " " << d[n - 1] << endl;
		}
	}

	return 0;
}
