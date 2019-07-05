// 5607. 조합
// 2019.07.05
#include <iostream>

using namespace std;

const long long p = 1234567891;
// 거듭제곱 재귀
long long pow(long long x, long long y)
{
	long long r = 1;
	while (y > 0)
	{
		if (y % 2)
		{
			r *= x;
			r %= p;
		}
		x *= x;
		x %= p;
		y /= 2;
	}
	return r;
}

int main()
{
	long long n, k;
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n >> k;
		long long A = 1;
		long long B = 1;
		// n!
		for (long long i = n; i >= 1; i--)
		{
			A *= i;
			A %= p;
		}
		// k!
		for (long long i = k; i >= 1; i--)
		{
			B *= i;
			B %= p;
		}
		// k! * (n-k)!
		for (long long i = n - k; i >= 1; i--)
		{
			B *= i;
			B %= p;
		}
		cout << "#" << i << " " << (A*pow(B, p - 2)) % p << endl;
	}
	return 0;
}
