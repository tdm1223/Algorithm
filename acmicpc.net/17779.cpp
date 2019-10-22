// 17779. 게리맨더링 2
// 2019.10.21
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int map[21][21]; // 인구수
int ward[21][21]; // 선거구
int n;
int dx[2] = { 1,1 };
int dy[2] = { -1,1 };
int ans = 987654231;
void make(int x, int y, int left, int right)
{
	// 마름모를 그릴수 없는 경우
	if (x + left + right >= n)
	{
		return;
	}
	for (int i = 0; i < 21; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			ward[i][j] = 0;
		}
	}
	pair<int, int> pos[4]; // 4개의 경계 위치를 담고있는 배열
	pos[0] = { x,y }; // 마름모 위 점
	pos[1] = { x + left,y - left }; // 마름모 왼쪽점
	pos[2] = { x + right,y + right }; // 마름모 오른쪽 점
	pos[3] = { x + left + right,y + (right - left) }; //  마름모 아래 점
	// 5번 구역
	// 마름모 중심기준 왼쪽아래까지
	ward[x][y] = 5;
	for (int i = 1; i <= left; i++)
	{
		ward[x + dx[0] * i][y + dy[0] * i] = 5;
	}
	// 마름모 중심기준 오른쪽 아래까지
	for (int i = 1; i <= right; i++)
	{
		ward[x + dx[1] * i][y + dy[1] * i] = 5;
	}
	// 마름모 왼쪽 점 기준 아래 점까지
	int xx = x + dx[0] * left;
	int yy = y + dy[0] * left;
	for (int i = 1; i <= right; i++)
	{
		ward[xx + dx[1] * i][yy + dy[1] * i] = 5;
	}
	// 마름모 오른쪽 점 기준 아래 점까지
	xx = x + dx[1] * right;
	yy = y + dy[1] * right;
	for (int i = 1; i <= left; i++)
	{
		ward[xx + dx[0] * i][yy + dy[0] * i] = 5;
	}

	// 1번 구역
	for (int i = 0; i < pos[1].first; i++)
	{
		for (int j = 0; j <= pos[0].second; j++)
		{
			if (ward[i][j] == 5)
			{
				break;
			}
			ward[i][j] = 1;
		}
	}
	// 2번 구역
	for (int i = 0; i <= pos[2].first; i++)
	{
		for (int j = n - 1; j > pos[0].second; j--)
		{
			if (ward[i][j] == 5)
			{
				break;
			}
			ward[i][j] = 2;
		}
	}
	// 3번 구역
	for (int i = pos[1].first; i < n; i++)
	{
		for (int j = 0; j < pos[3].second; j++)
		{
			if (ward[i][j] == 5)
			{
				break;
			}
			ward[i][j] = 3;
		}
	}
	// 4번 구역
	for (int i = pos[2].first + 1; i < n; i++)
	{
		for (int j = n - 1; j >= pos[3].second; j--)
		{
			if (ward[i][j] == 5)
			{
				break;
			}
			ward[i][j] = 4;
		}
	}

	// 각 선거구의 인구의 합을 구함
	int sum[6] = { 0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ward[i][j] == 0)
			{
				sum[5] += map[i][j];
			}
			else
			{
				sum[ward[i][j]] += map[i][j];
			}
		}
	}

	// 선거구 최대, 최소값의 차이를 구함
	int maxSum = 0;
	int minSum = 987654231;
	for (int i = 1; i <= 5; i++)
	{
		maxSum = max(maxSum, sum[i]);
		minSum = min(minSum, sum[i]);
	}
	// 차이의 최소를 ans에 저장
	ans = min(ans, maxSum - minSum);
}

// 마름모 시작점(맨 위의 점)을 선택하는 함수
void choice(int x, int y)
{
	int left = y; // 왼쪽으로 갈수 있는 최대치
	int right = n - y - 1; // 오른쪽으로 갈수 있는 최대치
	for (int i = 1; i <= left; i++)
	{
		for (int j = 1; j <= right; j++)
		{
			make(x, y, i, j);
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			choice(i, j);
		}
	}
	cout << ans << endl;
	return 0;
}
