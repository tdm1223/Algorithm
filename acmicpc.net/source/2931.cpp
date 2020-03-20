// 2931. 가스관
// 2019.05.21
// BFS, DFS, 다익스트라 알고리즘
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

char map[26][26];
// 우,좌,하,상
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int x, y;
struct pipe
{
	int first;
	int second;
	int dir;
};
bool cmp(const pipe& a, const pipe& b)
{
	return a.dir < b.dir;
}
int main()
{
	int r, c;
	cin >> r >> c;

	vector<pipe> pipes;

	for (int i = 0; i < r; i++)
	{
		string tmp;
		cin >> tmp;
		for (int j = 0; j < tmp.length(); j++)
		{
			map[i][j] = tmp[j];
		}
	}

	// 지웠을 가능성이 있는 블록을 찾음 무조건 1개의 위치가 나온다.
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (map[i][j] != '.' && map[i][j] != 'M' && map[i][j] != 'Z')
			{
				switch (map[i][j])
				{
				case '|': // 상하
					for (int k = 2; k < 4; k++)
					{
						int x = i + dx[k];
						int y = j + dy[k];
						if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
						{
							pipes.push_back({ x,y,k });
						}
					}
					break;
				case '-': // 좌우
					for (int k = 0; k < 2; k++)
					{
						int x = i + dx[k];
						int y = j + dy[k];
						if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
						{
							pipes.push_back({ x,y,k });
						}
					}
					break;
				case '+': // 상하좌우
					for (int k = 0; k < 4; k++)
					{
						int x = i + dx[k];
						int y = j + dy[k];
						if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
						{
							pipes.push_back({ x,y,k });
						}
					}
					break;
				case '1': // 우, 하
					x = i + dx[0];
					y = j + dy[0];
					if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
					{
						pipes.push_back({ x,y,0 });
					}
					x = i + dx[2];
					y = j + dy[2];
					if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
					{
						pipes.push_back({ x,y,2 });
					}
					break;
				case '2': // 우, 상
					x = i + dx[0];
					y = j + dy[0];
					if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
					{
						pipes.push_back({ x,y,0 });
					}
					x = i + dx[3];
					y = j + dy[3];
					if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
					{
						pipes.push_back({ x,y,3 });
					}
					break;
				case '3': // 좌 상
					x = i + dx[1];
					y = j + dy[1];
					if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
					{
						pipes.push_back({ x,y,1 });
					}
					x = i + dx[3];
					y = j + dy[3];
					if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
					{
						pipes.push_back({ x,y,3 });
					}
					break;
				case '4': // 좌 하
					x = i + dx[1];
					y = j + dy[1];
					if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
					{
						pipes.push_back({ x,y,1 });
					}
					x = i + dx[2];
					y = j + dy[2];
					if (x >= 0 && y >= 0 && x < r && y < c && map[x][y] == '.')
					{
						pipes.push_back({ x,y,2 });
					}
					break;
				}
			}
		}
	}

	// pairs에 들어있는 x,y좌표는 모두 같음
	int x = pipes[0].first;
	int y = pipes[0].second;

	// 아래 연산을 위해 pair를 dir로 정렬
	sort(pipes.begin(), pipes.end(), cmp);
	char ans = '.';
	if (pipes.size() == 4)
	{
		ans = '+';
	}
	else {
		int first = pipes[0].dir;
		int second = 0;
		if (pipes.size() == 2)
		{
			second = pipes[1].dir;
		}
		else { // 1개일때 (출발지점이나 도착지점 인근 구역이 지워진경우)
			for (int k = 0; k < 4; k++)
			{
				int xx = x + dx[k];
				int yy = y + dy[k];
				if (xx < 0 || yy < 0 || xx >= r || yy >= c)
				{
					continue;
				}
				if (map[xx][yy] == 'M' || map[xx][yy] == 'Z')
				{
					// 출력할땐 반대방향의 아이템을 선택해야 하므로 k에 맞게 second값을 바꿈
					switch (k)
					{
					case 0:
						second = 1;
						break;
					case 1:
						second = 0;
						break;
					case 2:
						second = 3;
						break;
					case 3:
						second = 2;
						break;
					}
				}
			}
		}

		if (first == 0)
		{
			if (second == 1)
			{
				ans = '-';
			}
			else if (second == 2)
			{
				ans = '3';
			}
			else if (second == 3)
			{
				ans = '4';
			}
		}
		else if (first == 1)
		{
			if (second == 2)
			{
				ans = '2';
			}
			else if (second == 3)
			{
				ans = '1';
			}
		}
		else if (first == 2)
		{
			if (second == 3)
			{
				ans = '|';
			}
		}
	}
	cout << (x + 1) << " " << y + 1 << " " << ans << endl;
	return 0;
}
