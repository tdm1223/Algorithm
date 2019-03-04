// 2019.03.02
// 1850. 최대공약수
#include<iostream>

using namespace std;

int gcd(long long a, long long b)
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
	long long a, b;
	cin >> a >> b;
	// 최대공약수만큼 1을 출력
	for (int i = 0; i < gcd(a, b); i++)
	{
		printf("1");
	}
	printf("\n");
	return 0;
}
