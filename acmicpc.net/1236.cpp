// 1236. 성 지키기
// 2019.09.21
// 탐색
#include<iostream>
#include<algorithm>

using namespace std;

char map[51][51];
int col[51];
int row[51];
int main()
{
	int x, y;
	cin >> x >> y;
	int cnt = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 'X')
			{
				// 행과 열 체크
				col[i] = true;
				row[j] = true;
			}
		}
	}

	int cnt1 = 0;
	int cnt2 = 0;
	// 행이 보호가 되고 있는지 체크
	for (int i = 0; i < x; i++)
	{
		if (!col[i])
		{
			cnt1++;
		}
	}

	// 열이 보호가 되고 있는지 체크
	for (int i = 0; i < y; i++)
	{
		if (!row[i])
		{
			cnt2++;
		}
	}
	// 둘중 큰 값이 정답
	cout << max(cnt1, cnt2) << endl;
	return 0;
}
