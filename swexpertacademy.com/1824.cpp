// 1824. 혁진이의 프로그램 검증
// 2019.07.20
#include<iostream>

using namespace std;

char map[21][21];
int visit[21][21];
int r, c;
int dfs(int x, int y, int dir, int mem, int count)
{
	visit[x][y]++;
	if (map[x][y] == '@')
	{
		return 1;
	}
	else if (visit[x][y] > 500)
	{
		return 0;
	}
	else if (count > 3000)
	{
		return 0;
	}
	else if (map[x][y] == '<') // 왼쪽 이동
	{
		if (y - 1 < 0)
		{
			y = c;
		}
		return dfs(x, y - 1, 2, mem, count + 1);
	}
	else if (map[x][y] == '>') // 오른쪽 이동
	{
		if (y + 1 >= c)
		{
			y = -1;
		}
		return dfs(x, y + 1, 0, mem, count + 1);
	}
	else if (map[x][y] == '^') // 위로 이동
	{
		if (x - 1 < 0)
		{
			x = r;
		}
		return dfs(x - 1, y, 3, mem, count + 1);
	}
	else if (map[x][y] == 'v') // 아래로 이동
	{
		if (x + 1 >= r)
		{
			x = -1;
		}
		return dfs(x + 1, y, 1, mem, count + 1);
	}
	else if (map[x][y] == '_') // 0이면 오른쪽 아니면 왼쪽
	{
		if (mem == 0)
		{
			if (y + 1 >= c)
			{
				y = -1;
			}
			return dfs(x, y + 1, 0, mem, count + 1);
		}
		else
		{
			if (y - 1 < 0)
			{
				y = c;
			}
			return dfs(x, y - 1, 2, mem, count + 1);
		}
	}
	else if (map[x][y] == '|') // 0이면 아래쪽 아니면 위쪽
	{
		if (mem == 0)
		{
			if (x + 1 >= r)
			{
				x = -1;
			}
			return dfs(x + 1, y, 1, mem, count + 1);
		}
		else
		{
			if (x - 1 < 0)
			{
				x = r;
			}
			return dfs(x - 1, y, 3, mem, count + 1);
		}
	}
	else if (map[x][y] == '?') // 4방향
	{
		int check = 0;
		int result = 0;

		if (y + 1 >= c)
		{
			y = -1;
			check = 1;
		}
		result = dfs(x, y + 1, 0, mem, count + 1);
		if (check == 1)
		{
			y = c - 1;
		}

		if (result == 1)
		{
			return result;
		}
		check = 0;

		if (x + 1 >= r)
		{
			x = -1;
			check = 1;
		}
		result = dfs(x + 1, y, 1, mem, count + 1);
		if (check == 1)
		{
			x = r - 1;
		}

		if (result == 1)
		{
			return result;
		}
		check = 0;

		if (y - 1 < 0)
		{
			y = c;
			check = 1;
		}
		result = dfs(x, y - 1, 2, mem, count + 1);
		if (check == 1)
		{
			y = 0;
		}

		if (result == 1)
		{
			return result;
		}
		check = 0;

		if (x - 1 < 0)
		{
			x = r;
			check = 1;
		}
		result = dfs(x - 1, y, 3, mem, count + 1);

		if (result == 1)
		{
			return result;
		}
	}
	else if (map[x][y] == '.') // 아무것도하지않는다.
	{
		if (dir == 0)
		{
			if (y + 1 >= c)
			{
				y = -1;
			}
			return dfs(x, y + 1, 0, mem, count + 1);
		}
		else if (dir == 1)
		{
			if (x + 1 >= r)
			{
				x = -1;
			}
			return dfs(x + 1, y, 1, mem, count + 1);
		}
		else if (dir == 2)
		{
			if (y - 1 < 0)
			{
				y = c;
			}
			return dfs(x, y - 1, 2, mem, count + 1);
		}
		else if (dir == 3)
		{
			if (x - 1 < 0)
			{
				x = r;
			}
			return dfs(x - 1, y, 3, mem, count + 1);
		}
	}
	else if (map[x][y] >= '0' && map[x][y] <= '9') // 숫자일때 숫자 저장
	{
		mem = map[x][y] - '0';
		if (dir == 0)
		{
			if (y + 1 >= c)
			{
				y = -1;
			}
			return dfs(x, y + 1, 0, mem, count + 1);
		}
		else if (dir == 1)
		{
			if (x + 1 >= r)
			{
				x = -1;
			}
			return dfs(x + 1, y, 1, mem, count + 1);
		}
		else if (dir == 2)
		{
			if (y - 1 < 0)
			{
				y = c;
			}
			return dfs(x, y - 1, 2, mem, count + 1);
		}
		else if (dir == 3)
		{
			if (x - 1 < 0)
			{
				x = r;
			}
			return dfs(x - 1, y, 3, mem, count + 1);
		}
	}
	else if (map[x][y] == '+') // 1을 더한다
	{
		if (mem == 15)
		{
			mem = 0;
		}
		else
		{
			mem++;
		}
		if (dir == 0)
		{
			if (y + 1 >= c)
			{
				y = -1;
			}
			return dfs(x, y + 1, 0, mem, count + 1);
		}
		else if (dir == 1)
		{
			if (x + 1 >= r)
				x = -1;
			return dfs(x + 1, y, 1, mem, count + 1);
		}
		else if (dir == 2)
		{
			if (y - 1 < 0)
			{
				y = c;
			}
			return dfs(x, y - 1, 2, mem, count + 1);
		}
		else if (dir == 3)
		{
			if (x - 1 < 0)
			{
				x = r;
			}
			return dfs(x - 1, y, 3, mem, count + 1);
		}
	}
	else if (map[x][y] == '-') // 1을 뺀다.
	{
		if (mem == 0)
		{
			mem = 15;
		}
		else
		{
			mem--;
		}
		if (dir == 0)
		{
			if (y + 1 >= c)
			{
				y = -1;
			}
			return dfs(x, y + 1, 0, mem, count + 1);
		}
		else if (dir == 1)
		{
			if (x + 1 >= r)
			{
				x = -1;
			}
			return dfs(x + 1, y, 1, mem, count + 1);
		}
		else if (dir == 2)
		{
			if (y - 1 < 0)
			{
				y = c;
			}
			return dfs(x, y - 1, 2, mem, count + 1);
		}
		else if (dir == 3)
		{
			if (x - 1 < 0)
			{
				x = r;
			}
			return dfs(x - 1, y, 3, mem, count + 1);
		}
	}
	return 0;
}

int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		cin >> r >> c;
		int check = 0;
		for (int i = 0; i < 21; i++)
		{
			for (int j = 0; j < 21; j++)
			{
				map[i][j] = 0;
				visit[i][j] = 0;
			}
		}
		for (int i = 0; i < r; i++)
		{
			cin >> map[i];
			for (int j = 0; check == 0 && j < c; j++)
			{
				if (map[i][j] == '@')
				{
					check = 1;
					break;
				}
			}
		}
		cout << "#" << testCase;
		if (!check)
		{
			cout << " NO" << endl;
			continue;
		}
		int result = dfs(0, 0, 0, 0, 0);
		if (result == 1)
		{
			cout << " YES" << endl;
		}
		else
		{
			cout << " NO" << endl;
		}
	}
	return 0;
}
