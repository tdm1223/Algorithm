// 2742. 기찍 N
// 2019.05.20
// 출력
#include<iostream>

using namespace std;

int main()
{
	int n;
	// 시간 초과를 방지하기 위해 scanf, printf 사용
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}
