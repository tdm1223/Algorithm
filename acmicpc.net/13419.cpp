// 13419. 탕수육
// 2019.09.01
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n-- > 0)
	{
		string s;
		cin >> s;
		string a = "";
		string b = "";
		if (s.size() % 2 == 0)
		{
			for (int i = 0; i < s.size(); i += 2)
			{
				a += s[i];
			}
			for (int i = 1; i < s.size(); i += 2)
			{
				b += s[i];
			}
		}
		else
		{
			if (s.size() == 1)
			{
				a = s[0];
				b = s[0];
			}
			else
			{
				for (int i = 0; i < s.size(); i += 2)
				{
					a += s[i];
				}
				for (int i = 1; i < s.size(); i += 2)
				{
					a += s[i];
				}

				for (int i = 1; i < s.size(); i += 2)
				{
					b += s[i];
				}
				for (int i = 0; i < s.size(); i += 2)
				{
					b += s[i];
				}
			}
		}
		cout << a << "\n" << b << "\n";
	}
	return 0;
}
