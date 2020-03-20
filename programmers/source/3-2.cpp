// 거스름돈
// 2019.06.28
#include<vector>

using namespace std;

int d[100001]; // d[i] : i원을 거슬러 줄 방법의 수
int solution(int n, vector<int> money)
{
	for (int i = 0; i <= n; i++)
	{
		d[i] = (i % money[0] == 0) ? 1 : 0;
	}
	for (int i = 1; i < money.size(); i++)
	{
		// 모든 돈의 가치에 대해 조사
		for (int j = money[i]; j <= n; j++)
		{
			d[j] += d[j - money[i]];
			d[j] %= 1000000007;
		}
	}
	return d[n];
}
