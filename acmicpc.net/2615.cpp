// 2615. 오목
// 2019.04.04
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int map[21][21];
int dx[8] = { 1,-1,0,0,1,-1,1,-1 };
int dy[8] = { 0,0,1,-1,-1,1,1,-1 };
bool flag1;
bool flag2;
vector<pair<int, int>> v;
bool compare(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second < b.second;
}
// 5개 연속으로 놓인것 찾기
void Find(int x, int y, int type)
{
#pragma region 상하
	int k = 1;
	v.clear();
	v.push_back({ x,y });
	for (int i = 0; i < 2; i++)
	{
		int xx = x;
		int yy = y;
		while (1)
		{
			xx += dx[i];
			yy += dy[i];

			if (xx < 1 || yy < 1 || xx>19 || yy>19 || map[xx][yy] != type)
			{
				break;
			}
			v.push_back({ xx,yy });
			k++;
		}
	}
	if (k == 5)
	{
		if (type == 1)
		{
			flag1 = true;
		}
		else
		{
			flag2 = true;
		}
		return;
	}
#pragma endregion

#pragma region 좌우
	k = 1;
	v.clear();
	v.push_back({ x,y });
	for (int i = 2; i < 4; i++)
	{
		int xx = x;
		int yy = y;
		while (1)
		{
			xx += dx[i];
			yy += dy[i];

			if (xx < 1 || yy < 1 || xx>19 || yy>19 || map[xx][yy] != type)
			{
				break;
			}
			v.push_back({ xx,yy });
			k++;
		}
	}
	if (k == 5)
	{
		if (type == 1)
		{
			flag1 = true;
		}
		else
		{
			flag2 = true;
		}
		return;
	}
#pragma endregion

#pragma region 우상대각
	k = 1;
	v.clear();
	v.push_back({ x,y });
	for (int i = 4; i < 6; i++)
	{
		int xx = x;
		int yy = y;
		while (1)
		{
			xx += dx[i];
			yy += dy[i];
			if (xx < 1 || yy < 1 || xx>19 || yy>19 || map[xx][yy] != type)
			{
				break;
			}
			v.push_back({ xx,yy });
			k++;
		}
	}
	if (k == 5)
	{
		if (type == 1)
		{
			flag1 = true;
		}
		else
		{
			flag2 = true;
		}
		return;
	}
#pragma endregion

#pragma region 우하대각
	k = 1;
	v.clear();
	v.push_back({ x,y });
	for (int i = 6; i < 8; i++)
	{
		int xx = x;
		int yy = y;
		while (1)
		{
			xx += dx[i];
			yy += dy[i];
			if (xx < 1 || yy < 1 || xx>19 || yy>19 || map[xx][yy] != type)
			{
				break;
			}
			v.push_back({ xx,yy });
			k++;
		}
	}
	if (k == 5)
	{
		if (type == 1)
		{
			flag1 = true;
		}
		else
		{
			flag2 = true;
		}
		return;
	}
#pragma endregion
}
int main()
{
	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			if (map[i][j] != 0)
			{
				Find(i, j, map[i][j]);
				if (flag1)
				{
					cout << 1 << endl;
					sort(v.begin(), v.end(), compare);

					cout << v[0].first << " " << v[0].second << endl;
					return 0;
				}
				if (flag2)
				{
					cout << 2 << endl;
					sort(v.begin(), v.end(), compare);
					cout << v[0].first << " " << v[0].second << endl;
					return 0;
				}
			}
		}
	}
	// 승부가 나지 않았을때
	cout << 0 << endl;
	return 0;
}
