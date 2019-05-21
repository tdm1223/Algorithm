// 5397. 키로거
// 2019.05.21
// 스택, 배열, 시뮬레이션, 링크드 리스트
#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		string s;
		cin >> s;

		list<char> list;
		auto cur = list.begin();

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '<')
			{
				if (cur != list.begin())
				{
					cur--;
				}
			}
			else if (s[i] == '>')
			{
				if (cur != list.end())
				{
					cur++;
				}
			}
			else if (s[i] == '-')
			{
				if (cur != list.begin())
				{
					cur--;
					cur = list.erase(cur);
				}
			}
			else
			{
				list.insert(cur, s[i]);
			}
		}

		for (auto iter = list.begin(); iter != list.end(); iter++)
		{
			cout << *iter;
		}
		cout << endl;
	}
	return 0;
}
