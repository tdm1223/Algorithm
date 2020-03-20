// 2018. 수들의 합 5
// 2019.08.10
// 수학
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	// n이하로 반복을 돌린다.
	for (int i = 1; i <= n; i++)
	{
		int tmp = 0;
		// i부터 n까지 연속된 수의 합을 계산해본다.
		for (int j = i; j <= n; j++)
		{
			tmp += j;
			// 동일하다면 연속된 수로 표현 가능
			if (tmp == n)
			{
				ans++;
				break;
			}
			// 초과한다면 더이상 볼 필요 없음
			else if (tmp > n)
			{
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
