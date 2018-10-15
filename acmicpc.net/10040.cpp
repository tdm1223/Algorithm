// 10040. 투표
// 2018.10.15
#include<iostream>

using namespace std;

int cost[1002];
int vote[1002];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> cost[i];
	}

	while (m > 0)
	{
		m--;
		int p;
		cin >> p;

		for (int i = 1; i <= n; i++)
		{
			if (cost[i] <= p)
			{
				vote[i]++;
				break;
			}
		}
	}

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
