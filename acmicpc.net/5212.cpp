// 5212. 지구 온난화
// 2019.05.21
// 구현
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

char map[11][11];
char newMap[11][11];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			map[i][j] = s[j];
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			int count = 0;
			for (int k = 0; k < 4; k++)
			{
				int x = i + dx[k];
				int y = j + dy[k];
				// 범위를 벗어난것도 모두 바다
				if (map[x][y] == '.' || x < 0 || y < 0 || x >= a || y >= b)
				{
					count++;
				}
			}
			if (count >= 3) // 가라 앉게 되는 섬
			{
				newMap[i][j] = '.';
			}
			else
			{
				newMap[i][j] = map[i][j];
			}
		}
	}

	// 50년후 지도를 출력하기 위해 X의 최소, 최대 위치를 찾음
	int minX = 10, minY = 10, maxX = -1, maxY = -1;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (newMap[i][j] == 'X')
			{
				minX = min(minX, i);
				minY = min(minY, j);
				maxX = max(maxX, i);
				maxY = max(maxY, j);
			}
		}
	}

	// 출력
	for (int i = minX; i <= maxX; i++)
	{
		for (int j = minY; j <= maxY; j++)
		{
			cout << newMap[i][j];
		}
		cout << endl;
	}
	return 0;
}
