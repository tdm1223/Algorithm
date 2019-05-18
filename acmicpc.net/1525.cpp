// 1525. 퍼즐
// 2019.05.18
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<queue>

using namespace std;

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int ans;

int main()
{
	int num = 0;
	int a;
	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		if (a == 0)
		{
			a = 9;
		}
		num = num * 10 + a;
	}

	map<int, int> puzzle;
	puzzle.insert({ num,0 });
	queue<int> q;
	q.push(num);
	while (!q.empty())
	{
		int curNum = q.front();
		string now = to_string(curNum);
		q.pop();
		int idx = now.find('9');
		// idx의 위치를 0,0~3,3사이로 바꿔준다.
		int x = idx / 3;
		int y = idx % 3;
		for (int i = 0; i < 4; i++)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];

			if (xx < 0 || yy < 0 || xx >= 3 || yy >= 3)
			{
				continue;
			}

			string next = now;
			// 퍼즐 이동
			swap(next[x * 3 + y], next[xx * 3 + yy]);
			int nextNum = stoi(next);

			// 아직 방문하지 않았다면 + 1 해서 맵에 저장
			if (puzzle.count(nextNum) == 0)
			{
				puzzle[nextNum] = puzzle[curNum] + 1;
				q.push(nextNum);
			}
		}
	}
	if (puzzle.count(123456789) == 0)
	{
		cout << -1 << '\n';
	}
	else
	{
		cout << puzzle[123456789] << '\n';
	}
	return 0;
}
