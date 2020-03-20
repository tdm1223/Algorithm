// 2609. 최대공약수와 최소공배수
// 2019.05.20
// 수학
#include<iostream>
#include<algorithm>

using namespace std;

// 최대공약수 재귀로 구하는 함수
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a%b);
	}
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << gcd(x, y) << endl;
	cout << x * y / gcd(x, y) << endl;
	return 0;
}
