// 3184. 양
// 2019.05.21
// BFS
#include<iostream>

using namespace std;

char map[251][251];
bool visit[251][251];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int r, c;

int w = 0; // BFS의 결과에 담을 늑대의 수
int s = 0; // BFS의 결과에 담을 양의 수
pair<int,int> BFS(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx < 0 || yy < 0 || xx >= r||yy >= c || map[xx][yy]=='#')
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
			else if (map[xx][yy] == 'o')
			{
				s++;
			}
			BFS(xx, yy);
		}
	}
	return { w,s }; // 늑대와 양의 쌍을 반환
}

int main()
{
	int wolves = 0; // 전체 늑대 수
	int sheep = 0; // 전체 양의 수
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
			else if (map[i][j] == 'o')
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
