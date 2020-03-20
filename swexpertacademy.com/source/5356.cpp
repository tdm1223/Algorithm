// 5356. 의석이의 세로로 말해요
// 2020.01.27
#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		char map[5][16];
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 16; j++)
			{
				map[i][j] = '.';
			}
		}
		for (int i = 0; i < 5; i++)
		{
			string s;
			cin >> s;

			for (int j = 0; j < s.size(); j++)
			{
				map[i][j] = s[j];
			}
		}

		string ans = "";
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (map[j][i] != '.')
				{
					ans += map[j][i];
				}
			}
		}
		cout << "#" << testCase << " " << ans << "\n";
	}
	return 0;
}
