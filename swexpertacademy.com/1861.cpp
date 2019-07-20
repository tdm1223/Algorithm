// 1861. 정사각형 방
// 2019.07.20
// 브루트 포스
#include<iostream>
#include<algorithm>

using namespace std;

int map[1000][1000];
int n;
int dist[1000][1000];
// 브루트포스로 탐색하는 함수
int go(int x, int y)
{
	if (dist[y][x] > 0)
	{
		return dist[y][x];
	}
	// 아래
	if (y + 1 < n &&  map[y][x] == map[y + 1][x] - 1)
	{
		return dist[y][x] = go(x, y + 1) + 1;
	}
	// 오른쪽
	if (x + 1 < n &&  map[y][x] == map[y][x + 1] - 1)
	{
		return dist[y][x] = go(x + 1, y) + 1;
	}
	// 위
	if (y - 1 >= 0 && map[y][x] == map[y - 1][x] - 1)
	{
		return dist[y][x] = go(x, y - 1) + 1;
	}
	// 왼쪽
	if (x - 1 >= 0 && map[y][x] == map[y][x - 1] - 1)
	{
		return dist[y][x] = go(x - 1, y) + 1;
	}
	return dist[y][x] = 1;
}

int main()
{
	int t;
	scanf("%d", &t);

	for (int testCase = 1; testCase <= t; testCase++)
	{
		scanf("%d", &n);
		// 입력
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &map[i][j]);
			}
		}
		// 초기화
		for (int i = 0; i < n; i++)
		{
			fill(dist[i], dist[i] + n, 0);
		}
		int max = 0;
		int index = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int tmpMax = go(j, i);
				if (tmpMax > max || (tmpMax == max && index > map[i][j]))
				{
					index = map[i][j];
					max = tmpMax;
				}
			}
		}
		printf("#%d %d %d\n", testCase, index, max);
	}
	return 0;
}
