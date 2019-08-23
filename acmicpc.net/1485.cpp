// 1485. 정사각형
// 2019.08.23
// 수학
#include<iostream>
#include<algorithm>

using namespace std;

int x[4];
int y[4];
int dist[12];
int main()
{
	int n;
	cin >> n;
	while (n-- > 0)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> x[i] >> y[i];
		}

		int cnt = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (i != j)
				{
					dist[cnt++] = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]);
				}
			}
		}
		// 정렬하면 4변의 길이가 2번씩 차례대로 나오고 대각선의 길이 2개가 2번씩 차례대로 나온다.
		sort(dist, dist + 12);

		// 변의 길이 중 맨처음과 맨 마지막이 같다면 정렬된 상태이므로 네 변의 길이는 모두 같다.
		// 변의 길이가 모두 같고 두 대각선의 길이가 같다면 정사각형이다.
		if (dist[0] == dist[6] && dist[8] == dist[10])
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}

	}
	return 0;
}
