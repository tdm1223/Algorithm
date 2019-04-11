// 15685. 드래곤 커브
// 2019.04.11
#include<iostream>
#include<vector>

using namespace std;

int map[101][101];
int dx[4] = { 0,-1,0,1 };
int dy[4] = { 1,0,-1,0 };
vector<int> dirs; // 방향들을 모아놓은 벡터
// 사각형의 개수를 체크하는 함수
int Check()
{
	int cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (map[i][j] == 1)
			{
				if (map[i + 1][j + 1] == 1 && map[i][j + 1] == 1 && map[i + 1][j] == 1)
				{
					cnt++;
				}
			}
		}
	}
	return cnt;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		dirs.clear();
		int x, y, d, g;
		cin >> y >> x >> d >> g;
		map[x][y] = 1;

		// 0세데
		int xx = x + dx[d];
		int yy = y + dy[d];
		map[xx][yy] = 1;
		dirs.push_back(d);

		// 1세대부터 g세대까지 반복
		for (int j = 1; j <= g; j++)
		{
			// 이전 세대의 방향들을 모아놓은 벡터의 뒷부터 방향+1한 결과를 반복한다
			// 1->2->4->8-> . . . 개수로 진행된다.
			for (int k = dirs.size() - 1; k >= 0; k--)
			{
				xx += dx[(dirs[k]+1)%4];
				yy += dy[(dirs[k]+1)%4];
				map[xx][yy] = 1;
				dirs.push_back((dirs[k] + 1) % 4);
			}
		}
	}

	cout << Check() << endl;
	return 0;
}
