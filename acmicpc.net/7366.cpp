// 7366. Counting Sheep
// 2019.09.05
// 입문용, 영어 문제
#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	for(int testCase=1;testCase<=t;testCase++)
	{
		int n;
		cin >> n;
		string s;
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			if (s == "sheep")
			{
				cnt++;
			}
		}
		cout << "Case " << testCase << ": This list contains " << cnt << " sheep.\n";
		if (testCase != t)
		{
			cout << "\n";
		}
	}
	return 0;
}
