// 7326. Number Steps
// 2019.05.21
// 자료구조, 정렬
#include<iostream>
#include<queue>

using namespace std;

int map[5001][5001];
int dx[4] = { 1,-1,1,1 };
int dy[4] = { 1,1,1,-1 };
int main()
{
	// -1로 초기화
	for (int i = 0; i < 5001; i++)
	{
		fill(map[i], map[i] + 5001, -1);
	}
	int x = 0;
	int y = 0;
	int cnt = 0;
	map[x][y] = cnt;
	int dir = 0;
	// 0,0 부터 5000,5000까지 값 넣을 수 있는곳에 넣어줌
	while (1)
	{
		x += dx[dir];
		y += dy[dir];
		if (x > 5000 || y > 5000)
		{
			break;
		}
		map[x][y] = ++cnt;
		dir = (dir + 1) % 4;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		int ans = map[y][x];
		if (ans == -1)
		{
			cout << "No Number" << endl;
		}
		else
		{
			cout << ans << endl;
		}
	}
	return 0;
}
