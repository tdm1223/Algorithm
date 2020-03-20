// 1210. Ladder1
// 2019.07.27
#include<iostream>

using namespace std;

int map[102][102];
int visit[102][102];
int ans;

void go(int x, int y)
{
	if (x == 1)
	{
		ans = y - 1;
		return;
	}
	visit[x][y] = 1;
	if (map[x][y + 1] == 1 && visit[x][y + 1] != 1)
	{
		go(x, y + 1);
	}
	else if (map[x][y - 1] == 1 && visit[x][y - 1] != 1)
	{
		go(x, y - 1);
	}
	else if (map[x - 1][y] == 1 && visit[x - 1][y] != 1)
	{
		go(x - 1, y);
	}
}

int main()
{
	for (int t = 1; t <= 10; t++)
	{
		ans = 0;
		for (int i = 0; i < 102; i++)
		{
			fill(visit[i], visit[i] + 102, 0);
			fill(map[i], map[i] + 102, 0);
		}
		int n;
		cin >> n;
		for (int i = 1; i <= 100; i++)
		{
			for (int j = 1; j <= 100; j++)
			{
				cin>>map[i][j];
				// 사다리 출발
				if (map[i][j] == 2)
				{
					go(i, j);
				}
			}
		}
		cout << "#" << t << " " << ans << endl;
	}
	return 0;
}
