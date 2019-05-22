// 11559. Puyo Puyo
// 2019.05.22
// BFS, DFS, 시뮬레이션
#include<iostream>
#include<queue>

using namespace std;

queue<pair<int,int>> boomPosition; // 터진것들을 .으로 바꿔주기 위해 터진 것들의 좌표를 저장하는 큐
char map[12][6];
bool visit[12][6];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

// 4개 이상 뭉친게 있는지 확인
int DFS(int x, int y, char c)
{
	int cnt = 1;
	visit[x][y] = 1;
	boomPosition.push({ x,y });
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx < 0 || yy < 0 || xx >= 12 || yy >= 6)
		{
			continue;
		}
		// 현재 문자와 같고 아직 방문하지 않았을때 추가
		if (map[xx][yy] == c && visit[xx][yy] == 0)
		{
			cnt += DFS(xx, yy, c);
		}
	}
	return cnt;
}

// puyo puyo판 재정렬
queue<char> q;
void Rearange()
{
	// 방문 기록 초기화
	for (int i = 0; i < 12; i++) // 가로
	{
		for (int j = 0; j < 6; j++) // 세로
		{
			visit[i][j] = 0;
		}
	}

	for (int i = 0; i < 6; i++) // 세로
	{
		for (int j = 0; j < 12; j++) // 가로
		{
			// 아래서 위로 순회하면서 .이 아닌 뿌요들을 큐에 푸시
			if (map[j][i] != '.')
			{
				q.push({ map[j][i] });
				map[j][i] = '.';
			}
		}
		int cnt = 0;
		// 큐가 비어있지 않을때까지 맵의 아래서부터 아까 넣은 뿌요들을 채움
		while (!q.empty())
		{
			map[cnt++][i] = q.front();
			q.pop();
		}
	}
}

int main()
{
	for (int i = 11; i >= 0; i--)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> map[i][j];
		}
	}

	int combo = 0;
	while (1)
	{
		bool boom = false;
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (map[i][j] != '.' && visit[i][j] == 0)
				{
					int cnt = DFS(i, j, map[i][j]);
					if (cnt >= 4)
					{
						boom = true;
						// 터진것들을 .으로 바꿈
						while (!boomPosition.empty())
						{
							map[boomPosition.front().first][boomPosition.front().second] = '.';
							boomPosition.pop();
						}
					}
					else // 터지지 않았다면 그냥 큐를 비워줌
					{
						while (!boomPosition.empty())
						{
							boomPosition.pop();
						}
					}
				}
			}
		}
		if (!boom) // 터지지 않았을땐 종료
		{
			break;
		}
		Rearange();
		combo++;
	}
	cout << combo << endl;
	return 0;
}
