// 2805. 농작물 수확하기
// 2019.07.02
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int map[51][51];
int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		for (int i = 0; i < 51; i++)
		{
			fill(map[i], map[i] + 51, 0);
		}
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%1d", &map[i][j]);
			}
		}
		int ans = 0;
		int idx = 1;
		// 2중 for문으로 농장 모양의 값만 계산
		for (int i = 0; i < n / 2; i++)
		{
			for (int j = 0; j < idx; j++)
			{
				ans += map[i][n / 2 - i + j];
				ans += map[n - 1 - i][n / 2 - i + j];
			}
			idx += 2;
			ans += (map[n / 2][i] + map[n / 2][n - 1 - i]);
		}
		cout << "#" << testCase << " " << ans + map[n / 2][n / 2] << endl;
	}
	return 0;
}
