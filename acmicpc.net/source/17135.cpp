// 17135. 캐슬 디펜스
// 2020.02.22
// 시뮬레이션
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int map[16][16];
int n, m, d;
int ch[3];
int ans;
int endLine=-1; // 최초 상태에 적이 있는 가장 높은 곳
vector<pair<int, int>> shotPos; // 궁수가 쏜 좌표를 모아논곳

// 두점의 거리를 구하는 함수
int GetDistance(int x1, int y1, int x2, int y2)
{
	int x = x1 - x2 > 0 ? x1 - x2 : x2 - x1;
	int y = y1 - y2 > 0 ? y1 - y2 : y2 - y1;
	return x + y;
}

void Simulate()
{
	int cnt = 0;
	int sum = 0;
	// 맵 복사
	int tmpMap[16][16];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tmpMap[i][j] = map[i][j];
		}
	}

	// 맨 위의 적이 다 내려올때까지 반복
	while (cnt< endLine)
	{
		shotPos.clear();
		// 궁수가 먼저 공격
		for (int i = 0; i < 3; i++)
		{
			int shotX = 20;
			int shotY = 20;
			int tmpDist = d;
			for (int j = n - 1; j >= 0; j--)
			{
				for (int k = 0; k < m; k++)
				{
					// 거리가 작으면 무조건 선택
					if (tmpMap[j][k] == 1 && GetDistance(j, k, n, ch[i]) < tmpDist)
					{
						tmpDist = GetDistance(j, k, n, ch[i]);
						shotX = j;
						shotY = k;
					}
					// 거리가 같을땐 가장 왼쪽
					else if (tmpMap[j][k] == 1 && GetDistance(j, k, n, ch[i]) == tmpDist)
					{
						if (k < shotY)
						{
							shotX = j;
							shotY = k;
						}
					}
				}
			}
			// 궁수가 쏜 위치가 갱신되어있는 상태라면 추가
			if (shotX != 20 && shotY != 20)
			{
				shotPos.push_back({ shotX,shotY });
			}
		}

		// 궁수가 쏜 포지션들에 대해 반복
		for (int i = 0; i < shotPos.size(); i++)
		{
			// 중복된 지점을 쐈을땐 1만 증가해야하므로 아래 조건 추가
			if (tmpMap[shotPos[i].first][shotPos[i].second] == 1)
			{
				tmpMap[shotPos[i].first][shotPos[i].second] = 0;
				sum++;
			}

		}

		// 적 이동
		for (int i = n-1; i >=1; i--)
		{
			for (int j = 0; j < m; j++)
			{
				tmpMap[i][j] = tmpMap[i - 1][j];
			}
		}
		for (int i = 0; i < m; i++)
		{
			tmpMap[0][i] = 0;
		}
		cnt++;
	}

	// 최댓값이라면 갱신
	ans = max(ans, sum);
}

// 궁수 3명을 놓을 위치 선택
void go(int cnt,int idx)
{
	if (cnt == 3)
	{
		Simulate();
		return;
	}

	for (int i = idx; i < m; i++)
	{
		ch[cnt] = i;
		go(cnt + 1, i + 1);
	}
}

int main()
{
	cin >> n >> m >> d;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1 && endLine==-1)
			{
				endLine = n-i;
			}
		}
	}

	go(0,0);
	cout << ans << endl;
	return 0;
}
