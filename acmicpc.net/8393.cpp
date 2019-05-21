// 8393. 합
// 2019.05.21
// 입문용
#include<iostream>

using namespace std;

int ans;
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ans += i;
	}
	printf("%d", ans);
	return 0;
}
