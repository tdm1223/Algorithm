// 6900. 주혁이의 복권 당첨
// 2019.06.29
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		int n, m;
		cin >> n >> m;
		pair<string, int> items[101]; // 당첨번호와 당첨금액 저장
		for (int i = 0; i < n; i++)
		{
			cin >> items[i].first >> items[i].second;
		}
		int ans = 0;
		for (int i = 0; i < m; i++)
		{
			string s;
			cin >> s;
			// 2중 for문으로 당첨 확인
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < s.size(); k++)
				{
					// 당첨되지 않았을 때
					if (s[k] != items[j].first[k] && items[j].first[k] != '*')
					{
						break;
					}
					// 당첨되었을때
					if (s[k] == items[j].first[k] && k == s.size() - 1)
					{
						ans += items[j].second;
					}
				}
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
