// 10093. 숫자
// 2019.09.06
// 입문용, 자료형
#include<iostream>

using namespace std;

int main()
{
	unsigned long long a, b;
	cin >> a >> b;
	if (a > b)
	{
		printf("%llu\n", a - b - 1);
		while (a - 1 > b)
		{
			b++;
			printf("%llu ", b);
		}
	}
	else if (a == b)
	{
		printf("0\n");
	}
	else
	{
		printf("%llu\n", b - a - 1);
		while (b - 1 > a)
		{
			a++;
			printf("%llu ", a);
		}
	}
	return 0;
}
