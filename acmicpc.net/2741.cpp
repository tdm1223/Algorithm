// 2741. N찍기
// 2018.12.08
#include<iostream>

using namespace std;

int main()
{
	int n;
	// 시간 초과를 방지하기 위해 scanf, printf 사용
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", i + 1);
	}
	return 0;
}
