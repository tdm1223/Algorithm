// 17144. 미세먼지 안녕!
// 2019.10.20
// 시뮬레이션
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int r, c, t;
int map[1001][1001];
int tmpMap[1001][1001];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
vector<pair<int, int>> airCleaners;
void diffusion()
{
	// 임시맵 초기화
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			tmpMap[i][j] = 0;
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (map[i][j] > 0)
			{
				int cnt = 0;
				for (int k = 0; k < 4; k++)
				{
					int x = i + dx[k];
					int y = j + dy[k];

					if (x < 0 || y < 0 || x >= r || y >= c)
					{
						continue;
					}

					// 확산한걸 tmpMap에 저장
					if (map[x][y] != -1)
					{
						tmpMap[x][y] += map[i][j] / 5;
						cnt++;
					}
				}
				map[i][j] -= (map[i][j] / 5)*cnt;
			}
		}
	}
	// map에 tmpMap값을 더해 먼지 확산 완성
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			map[i][j] += tmpMap[i][j];
		}
	}
}

void roop()
{
	// 공기 청정기 위
	queue<int> q;
	int first = airCleaners[0].first;
	int second = airCleaners[0].second;

	// 아래
	for (int i = 0; i < c - 1; i++)
	{
		q.push(map[first][i]);
	}
	// 오른쪽
	for (int i = first; i >= 1; i--)
	{
		q.push(map[i][c - 1]);
	}
	// 위
	for (int i = c - 1; i >= 1; i--)
	{
		q.push(map[0][i]);
	}
	// 왼쪽
	for (int i = 0; i < first; i++)
	{
		q.push(map[i][0]);
	}

	// 이동
	map[first][1] = 0;
	q.pop();
	// 아래
	for (int i = 2; i < c; i++)
	{
		map[first][i] = q.front();
		q.pop();
	}
	// 오른쪽
	for (int i = first - 1; i >= 0; i--)
	{
		map[i][c - 1] = q.front();
		q.pop();
	}
	// 위
	for (int i = c - 2; i >= 0; i--)
	{
		map[0][i] = q.front();
		q.pop();
	}
	// 왼쪽
	for (int i = 1; i < first; i++)
	{
		map[i][0] = q.front();
		q.pop();
	}
	q.pop();

	// 공기 청정기 아래
	first = airCleaners[1].first;
	second = airCleaners[1].second;
	// 위
	for (int i = 0; i < c - 1; i++)
	{
		q.push(map[first][i]);
	}
	// 오른쪽
	for (int i = first; i < r - 1; i++)
	{
		q.push(map[i][c - 1]);
	}
	// 아래
	for (int i = c - 1; i >= 1; i--)
	{
		q.push(map[r - 1][i]);
	}
	// 왼쪽
	for (int i = r - 1; i >= first + 1; i--)
	{
		q.push(map[i][0]);
	}

	// 이동
	map[first][1] = 0;
	q.pop();
	// 위
	for (int i = 2; i < c; i++)
	{
		map[first][i] = q.front();
		q.pop();
	}
	// 오른쪽
	for (int i = first+1; i < r; i++)
	{
		map[i][c - 1] = q.front();
		q.pop();
	}
	// 아래
	for (int i = c - 2; i >= 0; i--)
	{
		map[r-1][i] = q.front();
		q.pop();
	}
	// 왼쪽
	for (int i = r - 2; i >= first+1; i--)
	{
		map[i][0] = q.front();
		q.pop();
	}

}
int main()
{
	cin >> r >> c >> t;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> map[i][j];
			// 공기 청정기 추가
			if (map[i][j] == -1)
			{
				airCleaners.push_back({ i,j });
			}
		}
	}

	while (t-- > 0)
	{
		// 미세 먼지가 확산 된다.
		diffusion();

		// 공기 청정기가 작동한다.
		roop();
	}

	int ans = 2;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			ans += map[i][j];
		}
	}
	cout << ans << endl;
	return 0;
}
