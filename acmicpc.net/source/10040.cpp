// 10040. 투표
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int cost[1002];
int vote[1002];

int main()
{
	int n, m;
	cin >> n >> m;
	// 심사위원의 비용 입력 받음
	for (int i = 1; i <= n; i++)
	{
		cin >> cost[i];
	}

	while (m > 0)
	{
		m--;
		int p;
		cin >> p;
		// 투표
		for (int i = 1; i <= n; i++)
		{
			if (cost[i] <= p)
			{
				vote[i]++;
				break;
			}
		}
	}
	// 결과 출력
	int max = 0;
	int index = 0;
	for (int i = 1; i <= n; i++)
	{
		if (max<vote[i])
		{
			max = vote[i];
			index = i;
		}
	}
	cout << index << endl;
	return 0;
}
