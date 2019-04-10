// 1331. 나이트 투어
// 2019.04.10
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int dx[8] = { -1,-2,-2,-1,1,2,2,1 };
int dy[8] = { -2,-1,1,2,-2,-1,1,2 };
int map[7][7];
int beforeX;
int beforeY;
int x;
int y;
bool Check()
{
	// before에서 올수 있는지 체크
	for (int j = 0; j < 8; j++)
	{
		int xx = beforeX + dx[j];
		int yy = beforeY + dy[j];
		if (xx <= 0 || yy <= 0 || xx > 6 || yy > 6)
		{
			continue;
		}
		// 올수있으면
		if ((x == xx) && (yy = y))
		{
			beforeX = x;
			beforeY = y;
			return true;
		}
	}
	return false;
}
vector<pair<int, int>> order(36);
string ans = "Valid";
int main()
{
	for (int i = 0; i < 36; i++)
	{
		string s;
		cin >> s;
		int x = 7 - (s[1] - '0');
		int y = s[0] - 'A' + 1;
		order[i] = { x,y };
	}
	map[order[0].first][order[0].second] = 1;
	for (int i = 1; i <= 35; i++)
	{
		x = order[i].first;
		y = order[i].second;
		beforeX = order[i - 1].first;
		beforeY = order[i - 1].second;

		// 이미 방문한곳이면 타당하지 않음
		if (map[x][y] == 1)
		{
			break;
		}
		map[x][y] = 1;

		// before에서 올수 있는지 체크
		if (!Check())
		{
			break;
		}
	}

	// 전체 돌면서 방문 안한곳이 있는지 확인
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (map[i][j]==0)
			{
				ans = "Invalid";
			}
		}
	}

	// 마지막->처음 가능한지 확인
	bool flag = false;
	for (int j = 0; j < 8; j++)
	{
		int xx = x + dx[j];
		int yy = y + dy[j];
		if (xx <= 0 || xx>6 || yy <= 0 || yy>6)
		{
			continue;
		}
		if (xx == order[0].first && yy == order[0].second)
		{
			flag = true;
		}
	}
	if (!flag)
	{
		ans = "Invalid";
	}

	cout << ans << endl;
	return 0;
}
