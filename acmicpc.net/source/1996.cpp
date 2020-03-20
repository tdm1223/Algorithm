// 1996. 지뢰 찾기
// 2019.08.16
// 구현
#include<iostream>
#include<string>

using namespace std;

int dx[8] = { -1,-1,-1,0,0,1,1,1 };
int dy[8] = { -1,0,1,1,-1,-1,0,1 };
char map[1001][1001];
char copyMap[1001][1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			map[i][j] = s[j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == '.')
			{
				int cnt = 0;
				for (int k = 0; k < 8; k++)
				{
					int x = i + dx[k];
					int y = j + dy[k];
					if (x < 0 || y < 0 || x >= n || y >= n)
					{
						continue;
					}
					if (map[x][y] - '0' > 0 && map[x][y] - '0' <= 9)
					{
						cnt += map[x][y] - '0';
					}
				}
				if (cnt > 9)
				{
					copyMap[i][j] = 'M';
				}
				else
				{
					copyMap[i][j] = cnt+'0';
				}
			}
			else
			{
				copyMap[i][j] = '*';
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << copyMap[i][j];
		}
		cout << "\n";
	}
	return 0;
}
