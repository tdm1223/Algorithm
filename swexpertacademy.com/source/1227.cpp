// 1227. 미로2
// 2019.07.23
#include<iostream>
#include<string>
#include<queue>

using namespace std;

int map[101][101];
int visit[101][101];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
pair<int, int> startPos;
pair<int, int> endPos;
int main()
{
	for (int test = 1; test <= 10; test++)
	{
		int n;
		cin >> n;
		for (int i = 0; i < 101; i++)
		{
			fill(map[i], map[i] + 101, -1);
			fill(visit[i], visit[i] + 101, 0);
		}
		for (int i = 0; i < 100; i++)
		{
			string s;
			cin >> s;
			for (int j = 0; j < 100; j++)
			{
				map[i][j] = s[j] - '0';
				if (map[i][j] == 2)
				{
					startPos.first = i;
					startPos.second = j;
				}
				if (map[i][j] == 3)
				{
					endPos.first = i;
					endPos.second = j;
				}
			}
		}

		queue<pair<int, int>> q;
		q.push({ startPos.first,startPos.second });
		visit[startPos.first][startPos.second] = 1;
		bool flag = false;
		while (!q.empty())
		{
			int first = q.front().first;
			int second = q.front().second;
			q.pop();
			// 도착
			if (first == endPos.first && second == endPos.second)
			{
				flag = true;
				break;
			}
			// 4방향 탐색
			for (int i = 0; i < 4; i++)
			{
				int xx = first + dx[i];
				int yy = second + dy[i];

				if (xx < 0 || yy < 0 || xx >= 100 || yy >= 100)
				{
					continue;
				}

				if (map[xx][yy] == 1)
				{
					continue;
				}

				if (!visit[xx][yy])
				{
					visit[xx][yy] = 1;
					q.push({ xx,yy });
				}
			}
		}
		// 도착했다면 1, 도착할수 없다면 0
		if (flag)
		{
			cout << "#" << test << " 1" << endl;
		}
		else
		{
			cout << "#" << test << " 0" << endl;
		}
	}
	return 0;
}
