// 3187. 양치기 꿍
// 2019.05.21
// BFS
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

char map[251][251];
bool visit[251][251];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int r, c;

int w = 0;
int s = 0;
// 양과 늑대의 수를 반환하는 BFS
pair<int, int> BFS(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
    // 범위를 벗어나거나 울타리
		if (xx < 0 || yy < 0 || xx >= r || yy >= c || map[xx][yy] == '#')
		{
			continue;
		}

		if (!visit[xx][yy])
		{
			visit[xx][yy] = true;
			if (map[xx][yy] == 'v')
			{
				w++;
			}
			else if (map[xx][yy] == 'k')
			{
				s++;
			}
			BFS(xx, yy);
		}
	}

	return { w,s };
}
int main()
{
	int wolves = 0;
	int sheep = 0;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 'v')
			{
				wolves++;
			}
			else if (map[i][j] == 'k')
			{
				sheep++;
			}
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			w = 0;
			s = 0;
			if (!visit[i][j])
			{
				visit[i][j] = true;
				int first = BFS(i, j).first; //늑대의 수
				int second = BFS(i, j).second; // 양의 수
				if (first >= second)// 늑대의 승리
				{
					sheep -= second;
				}
				else// 양의 승리
				{
					wolves -= first;
				}
			}
		}
	}

	cout << sheep << " " << wolves << endl;
	return 0;
}
