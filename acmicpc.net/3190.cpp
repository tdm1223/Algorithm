// 3190. 뱀
// 2019.05.21
// 시뮬레이션
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int map[101][101];
// 우 하 좌 상
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

int curDir = 0; // 처음은 오른쪽 방향
int beforeDir = 0;
int curX = 1;
int curY = 1;
int tailX = 1;
int tailY = 1;
int ans = 0;

int main()
{
	int n;
	cin >> n; // 맵 크기
	int k;
	cin >> k; // 사과의 수

	for (int i = 0; i < k; i++)
	{
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
	}
	int l;
	cin >> l;

	map[curX][curY] = 2;

	// 뱀의 꼬리 순서를 저장하는 큐
	queue<pair<int, int>> tailQueue;
	tailQueue.push({ curX,curY });

	vector<pair<int, char>> v(l);
	for (int i = 0; i < l; i++)
	{
		int x;
		char c;
		cin >> x >> c;
		v[i] = { x,c };
	}

	for (int i = 0; i < l; i++)
	{
		while (ans < v[i].first)
		{
			curX += dx[curDir];
			curY += dy[curDir];
			// 범위를 벗어나면 종료
			if (curX <= 0 || curY <= 0 || curX > n || curY > n || map[curX][curY] == 2)
			{
				cout << ans + 1 << endl;
				return 0;
			}

			// 사과 일때
			if (map[curX][curY] == 1)
			{
				map[curX][curY] = 2;
				tailQueue.push({ curX,curY });
			}
			else
			{
				map[curX][curY] = 2;
				tailQueue.push({ curX,curY });
				int x = tailQueue.front().first;
				int y = tailQueue.front().second;
				tailQueue.pop();
				map[x][y] = 0;
			}
			ans++;
		}

		if (v[i].second == 'L')
		{
			curDir = (curDir + 3) % 4;
		}
		else
		{
			curDir = (curDir + 1) % 4;
		}
	}

	// 모든 시간 처리 후 나머지 처리
	while (1)
	{
		curX += dx[curDir];
		curY += dy[curDir];
		// 범위를 벗어나면 종료
		if (curX <= 0 || curY <= 0 || curX > n || curY > n || map[curX][curY] == 2)
		{
			cout << ans + 1 << endl;
			return 0;
		}
		// 사과 일때
		if (map[curX][curY] == 1)
		{
			map[curX][curY] = 2;
			tailQueue.push({ curX,curY });
		}
		else
		{
			map[curX][curY] = 2;
			tailQueue.push({ curX,curY });
			int x = tailQueue.front().first;
			int y = tailQueue.front().second;
			tailQueue.pop();
			map[x][y] = 0;
		}
		ans++;
	}
	return 0;
}
