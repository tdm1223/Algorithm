// 4108. 지뢰찾기
// 2019.05.21
// 구현
#include<string>
#include<iostream>

using namespace std;

char map[101][101];
int dx[8] = { -1,0,1,1,1,0,-1,-1 };
int dy[8] = { 1,1,1,0,-1,-1,-1,0 };
int main()
{
	while (1)
	{
		int r, c;
		cin >> r >> c;
		if (r == 0 && c == 0)
		{
			break;
		}
		for (int i = 0; i < r; i++)
		{
			string s;
			cin >> s;
			for (int j = 0; j < c; j++)
			{
				map[i][j] = s[j];
			}
		}
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (map[i][j] == '*')
				{
					continue;
				}
				int count = 0;
				for (int k = 0; k < 8; k++) // 지뢰가 아닌 점에 대해 인접한 8칸을 조사하여 지뢰발견시 수 증가
				{
					int xx = i + dx[k];
					int yy = j + dy[k];
					if (xx < 0 || yy < 0 || xx >= r || yy >= c)
					{
						continue;
					}
					if (map[xx][yy] == '*')
					{
						count++;
					}
				}
				map[i][j] = count + '0';
			}
		}
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c;j++)
			{
				cout << map[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}
