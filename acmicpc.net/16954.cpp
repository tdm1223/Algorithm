// 16954. 움직이는 미로 탈출
// 2019.03.23
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

char map[8][8];
int dx[9] = { -1,-1,-1,0,0,0,1,1,1 };
int dy[9] = { -1,0,1,-1,0,1,-1,0,1 };
vector<pair<int, int>> blocks;
int block[8][8][8];

struct player
{
	int x;
	int y;
	int time;
};

int main()
{
	int minTime = 8; // 이 시간이 지나면 생존할 수 있어서 탈출 가능, 벽이있는 가장작은 X좌표를 저장
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == '#')
			{
				minTime = min(minTime, i);
				blocks.push_back({ i,j });
				block[i][j][0] = 1;
			}
		}
	}

	minTime = 8 - minTime;
	// 벽을 내려줌
	for (int i = 0; i < blocks.size(); i++)
	{
		int cnt = 0;
		while (blocks[i].first < 7)
		{
			cnt++;
			blocks[i].first++;
			block[blocks[i].first][blocks[i].second][cnt] = 1;
		}
	}

	queue<player> q;
	q.push({ 7,0,0 });
	bool flag = false;
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		int time = q.front().time;
		if (time > minTime) // 시간이 지나서 탈출
		{
			flag = true;
			break;
		}
		if (x == 0) // 도착점에 도착하여 탈출
		{
			flag = true;
			break;
		}

		q.pop();

		for (int i = 0; i < 9; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx < 0 || yy < 0 || xx >= 8 || yy >= 8)
			{
				continue;
			}

			if (!block[xx][yy][time + 1] && !block[xx][yy][time])
			{
				q.push({ xx,yy,time + 1 });
			}
		}

	}

	if (flag)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	return 0;
}
