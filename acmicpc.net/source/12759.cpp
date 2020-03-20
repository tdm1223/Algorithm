// 12759. 틱! 택! 토!
// 2019.08.22
// 구현
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int map[4][4];
bool check(int checkNum)
{
	for (int i = 1; i <= 3; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= 3; j++)
		{
			if (map[i][j] == checkNum)
			{
				cnt++;
			}
		}
		if (cnt == 3)
		{
			return true;
		}
	}
	for (int i = 1; i <= 3; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= 3; j++)
		{
			if (map[j][i] == checkNum)
			{
				cnt++;
			}
		}
		if (cnt == 3)
		{
			return true;
		}
	}
	int cnt = 0;
	for (int i = 1; i <= 3; i++)
	{
		if (map[i][i] == checkNum)
		{
			cnt++;
		}
	}
	if (cnt == 3)
	{
		return true;
	}
	cnt = 0;
	for (int i = 1; i <= 3; i++)
	{
		if (map[i][4 - i] == checkNum)
		{
			cnt++;
		}
	}
	if (cnt == 3)
	{
		return true;
	}
	return false;
}
int main()
{
	int start;
	cin >> start;
	int end = (start == 1) ? 2 : 1;
	for (int i = 0; i < 9; i++)
	{
		int x, y;
		cin >> x >> y;
		if (i % 2 == 0)
		{
			map[x][y] = start;
		}
		else
		{
			map[x][y] = end;
		}
		if (check(start))
		{
			cout << start << endl;
			return 0;
		}
		if (check(end))
		{
			cout << end << endl;
			return 0;
		}
	}
	cout << "0" << endl;
	return 0;
}
