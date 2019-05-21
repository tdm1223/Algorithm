// 3943. 헤일스톤 수열
// 2019.05.21
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int d[100001];
int main()
{
  //cin, cout을 쓰면 시간 초과가 뜨므로 scanf, printf를 사용
	int t;
	scanf("%d", &t);
	while (t > 0)
	{
		t--;
		int n;
		scanf("%d", &n);
		int max = n;
		while (n != 1)
		{
			if (n % 2 == 0)
			{
				n /= 2;
			}
			else
			{
				n = n * 3 + 1;
			}
			if (max < n)
			{
				max = n;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}
