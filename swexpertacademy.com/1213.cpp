// 1213. String
// 2019.07.04
#include<iostream>
#include<string>

using namespace std;

int main()
{
	for (int x = 1; x <= 10; x++)
	{
		int t;
		cin >> t;
		string s;
		string sen;
		cin >> s >> sen;
		int cnt = 0;
		for (int i = 0; i <= sen.size() - s.size(); i++)
		{
			for (int j = 0; j < s.size(); j++)
			{
				if (sen[i + j] != s[j])
				{
					break;
				}
				if (j == s.size() - 1)
				{
					cnt++;
				}
			}
		}
		cout << "#" << x << " " << cnt << endl;
	}
	return 0;
}
