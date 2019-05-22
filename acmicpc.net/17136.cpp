// 17136. 색종이 붙이기
// 2019.05.22
// 브루트 포스
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int map[11][11];
int ans = 25; // 최대치로 초기화
int blocks[5] = { 5,5,5,5,5 };

bool check(int x, int y, int cnt)
{
	for (int i = x; i < x + cnt; i++)
	{
		for (int j = y; j < y + cnt; j++)
		{
			if (map[i][j] == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void go(int x, int y, int cnt)
{
	int flag = 0;
	// x,0부터 처음으로 0이 아닌 수가 나오는 지점을 찾음
	for (int i = x; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (map[i][j] == 1)
			{
				x = i;
				y = j;
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}

	if (flag == 0)
	{
		ans = min(ans, cnt);
		return;
	}

	for (int i = 1; i <= 5; i++)
	{
		// 5개를 다썼다면 무시
		if (blocks[i - 1] == 0)
		{
			continue;
		}

		// 덮을수 없는 점이라면 종료
		if (check(x, y, i) == false)
		{
			return;
		}
		// 덮을 수 있다면 덮는 크기의 색종이 숫자 감소
		else
		{
			blocks[i - 1]--;
		}
		// 색종이를 덮음
		for (int j = x; j < x + i; j++)
		{
			for (int k = y; k < y + i; k++)
			{
				map[j][k] = 0;
			}
		}
		go(x, y, cnt + 1);
		// 감소한 숫자 복구
		blocks[i - 1]++;
		// 덮은거 복구
		for (int j = x; j < x + i; j++)
		{
			for (int k = y; k < y + i; k++)
			{
				map[j][k] = 1;
			}
		}
	}
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> map[i][j];
		}
	}

	go(0, 0, 0);
	if (ans == 25)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << ans << endl;
	}
	return 0;
}
