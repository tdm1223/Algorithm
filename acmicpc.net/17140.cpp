// 17140. 이차원 배열과 연산
// 2019.04.14
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int map[101][101];
int tmpMap[101][101];
int counts[101];
int x, y;
int ans;
vector<pair<int, int>> v;

bool compare(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second < b.second;
}

void tmpMapInit()
{
	for (int i = 0; i < 101; i++)
	{
		fill(tmpMap[i], tmpMap[i] + 101, 0);
	}
}

void mapInit()
{
	for (int i = 0; i < 101; i++)
	{
		fill(map[i], map[i] + 101, 0);
	}
}
// R연산
void CalR()
{
	tmpMapInit();
	int tmpX = 1;
	for (int i = 1; i <= x; i++)
	{
		int tmpY = 1;
		fill(counts, counts + 101, 0);
		v.clear();
		// 값이 0이 아닐때 counts값 증가
		for (int j = 1; j <= y; j++)
		{
			if (map[i][j] != 0)
			{
				counts[map[i][j]]++;
			}
		}

		// 0이 아닌 값들을 넣음
		for (int j = 1; j <= 100; j++)
		{
			if (counts[j] != 0)
			{
				v.push_back({ j,counts[j] });
			}
		}

		// 최대 열의 수 조정
		y = max(y, (int)v.size() * 2);
		if (y > 100)
		{
			y = 100;
		}
		// 주어진 조건대로 정렬
		sort(v.begin(), v.end(), compare);

		// tmpMap에 값 삽입
		for (int j = 0; j < v.size(); j++)
		{
			tmpMap[tmpX][tmpY++] = v[j].first;
			tmpMap[tmpX][tmpY++] = v[j].second;
			if (tmpY > 100)
			{
				break;
			}
		}
		tmpX++;
	}

	// 맵복사
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			map[i][j] = tmpMap[i][j];
		}
	}
}
// C연산
void CalC()
{
	tmpMapInit();
	int tmpY = 1;
	for (int i = 1; i <= y; i++)
	{
		int tmpX = 1;
		fill(counts, counts + 101, 0);
		v.clear();
		// 값이 0이 아닐때 counts값 증가
		for (int j = 1; j <= x; j++)
		{
			if (map[j][i] != 0)
			{
				counts[map[j][i]]++;
			}
		}

		// 0이 아닌 값들을 넣음
		for (int j = 1; j <= 100; j++)
		{
			if (counts[j] != 0)
			{
				v.push_back({ j,counts[j] });
			}
		}

		// 최대 행의 수 조정
		x = max(x, (int)v.size() * 2);
		if (x > 100)
		{
			x = 100;
		}
		// 주어진 조건대로 정렬
		sort(v.begin(), v.end(), compare);

		// tmpMap에 값 삽입
		for (int j = 0; j < v.size(); j++)
		{
			tmpMap[tmpX++][tmpY] = v[j].first;
			tmpMap[tmpX++][tmpY] = v[j].second;
			if (tmpX > 100)
			{
				break;
			}
		}
		tmpY++;
	}

	// 맵복사
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			map[i][j] = tmpMap[i][j];
		}
	}
}
int main()
{
	int r, c, k;
	cin >> r >> c >> k;

	x = 3; // 행
	y = 3; // 열
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cin >> map[i][j];
		}
	}

	while (1)
	{
		// map[r][c]에 k가 있다면 종료
		if (map[r][c] == k)
		{
			break;
		}
		// 100번을 넘게했는데도 못했다면 종료
		if (ans > 100)
		{
			ans = -1;
			break;
		}
		ans++;
		// R연산
		if (x >= y)
		{
			CalR();
		}
		// C연산
		else
		{
			CalC();
		}
	}

	cout << ans << endl;
	return 0;
}
