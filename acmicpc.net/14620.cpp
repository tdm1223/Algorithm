// 14620. 꽃길
// 2019.08.06
// 브루트포스
#include<iostream>

using namespace std;

int map[11][11];
int visit[11][11];
int n;
int ans = 987654321;

// 꽃이 피는 5가지의 위치 방문 유무 탐색
bool check(int x, int y)
{
	// 한군데라도 방문했다면 꽃이 겹치게됨
	if (visit[x][y] == 1 || visit[x + 1][y] == 1 || visit[x - 1][y] == 1 || visit[x][y + 1] == 1 || visit[x][y - 1] == 1)
	{
		return false;
	}
	return true;
}
// 방문,방문해제[ 표시하는 함수
void visited(int x, int y, int v)
{
	visit[x][y] = v;
	visit[x + 1][y] = v;
	visit[x - 1][y] = v;
	visit[x][y + 1] = v;
	visit[x][y - 1] = v;
}
// 브루프포스 돌리는 함수
void go(int cnt, int cost)
{
	if (cnt == 3)
	{
		ans = cost > ans ? ans : cost;
		return;
	}

	// 외각을 제외하고 반복한다.
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			// 방문 가능 할때
			if (check(i, j))
			{
				visited(i, j, 1);
				int tmpCost = cost + map[i][j] + map[i + 1][j] + map[i - 1][j] + map[i][j + 1] + map[i][j - 1];
				go(cnt + 1, tmpCost);
				visited(i, j, 0);
			}
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}
	go(0, 0);
	cout << ans << endl;
	return 0;
}
