// 1735. 분수 합
// 2019.08.28
// 수학
#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int x = a * d + b * c;
	int y = b * d;
	cout << x/gcd(x,y) << " " << y/gcd(x,y) << endl;
	return 0;
}
