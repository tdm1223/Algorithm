// 1850. 최대공약수
// 2019.05.18
// 수학
#include<iostream>

using namespace std;

// 재귀로 최대 공약수 구하기
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
