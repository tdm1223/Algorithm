// 1063. 킹
// 2019.03.23
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string k, s;
	int n;
	cin >> k >> s >> n;
	pair<int, int> kingPos = { 7 - (k[1] - '1'),k[0] - 'A' }; // 킹의 좌표
	pair<int, int> stonePos = { 7 - (s[1] - '1'),s[0] - 'A' }; // 돌의 좌표

	for (int i = 0; i < n; i++)
	{
		string com;
		cin >> com;
		int x = 0, y = 0;
		for (int j = 0; j < com.size(); j++)
		{
			if (com[j] == 'L')
			{
				y -= 1;
			}
			if (com[j] == 'T')
			{
				x -= 1;
			}
			if (com[j] == 'B')
			{
				x += 1;
			}
			if (com[j] == 'R')
			{
				y += 1;
			}
		}
		// 킹이 장외일 경우
		if (x + kingPos.first < 0 || y + kingPos.second < 0 || x + kingPos.first >= 8 || y + kingPos.second >= 8)
		{
			continue;
		}
		// 돌이 있는 곳
		else if (x + kingPos.first == stonePos.first && y + kingPos.second == stonePos.second)
		{
			// 돌을 밀었을때 돌이 장외일 경우
			if (stonePos.first + x < 0 || stonePos.second + y < 0 || stonePos.first + x >= 8 || stonePos.second + y >= 8)
			{
				continue;
			}
			//돌을 밀 수 있는 경우
			else
			{
				//킹 좌표 재설정
				kingPos.first = stonePos.first, kingPos.second = stonePos.second;
				//돌 좌표 재설정
				stonePos.first += x;
				stonePos.second += y;
			}
		}
		// 돌이 없는 곳
		else
		{
			//킹 좌표 재설정
			kingPos.first += x;
			kingPos.second += y;
		}
	}

	//최종 좌표 출력
	printf("%c%d\n%c%d", kingPos.second + 'A', 8 - kingPos.first, stonePos.second + 'A', 8 - stonePos.first);
	return 0;
}
