// 1934. 최소공배수
// 2019.05.19
// 유클리드 호제법
#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int stack[10000];
// 재귀로 최대 공약수 구하기
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
	int t;
	cin >> t;
	int x, y;
	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;
    // 최소공배수 = 두수의 곱 / 두수의 최대공약수
		cout << x * y / gcd(x, y) << endl;
	}
	return 0;
}
