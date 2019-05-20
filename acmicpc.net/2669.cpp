// 2669. 직사각형 네개의 합집합의 면적 구하기
// 2019.05.20
// 입문용
#include<iostream>

using namespace std;

int map[101][101];
int main()
{
	// 4개 직사각형의 두 좌표씩 입력받기
	for (int i = 0; i < 4; i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		// 사각형을 그려줌(1로 표시)
		for (int j = x1; j < x2; j++)
		{
			for (int k = y1; k < y2; k++)
			{
				map[k][j] = 1;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (map[i][j] == 1)
			{
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
