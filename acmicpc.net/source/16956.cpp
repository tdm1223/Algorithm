// 16956. 늑대와 양
// 2019.09.14
// 구현
#include<iostream>

using namespace std;

char map[502][502];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
	int r, c;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> map[i][j];
		}
	}

	bool flag = true;
	// 늑대 주변에 양이 있는지 확인
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (map[i][j] == 'W')
			{
				for (int k = 0; k < 4; k++)
				{
					int x = i + dx[k];
					int y = j + dy[k];
					// 범위를 벗어남
					if (x < 0 || y < 0 || x >= r || y >= c)
					{
						continue;
					}
					// 늑대 주변에 양이 있음
					if (map[x][y] == 'S')
					{
						flag = false;
						break;
					}
				}
			}
		}
	}

	if (flag)
	{
		cout << 1 << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (map[i][j] == '.')
				{
					cout << "D";
				}
				else
				{
					cout << map[i][j];
				}
			}
			cout << "\n";
		}
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
}
