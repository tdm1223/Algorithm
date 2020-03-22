// 앵무새 꼬꼬
// 2020.03.22
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<char, bool> maps;
	maps['a'] = true;
	maps['e'] = true;
	maps['i'] = true;
	maps['o'] = true;
	maps['u'] = true;
	maps['A'] = true;
	maps['E'] = true;
	maps['I'] = true;
	maps['O'] = true;
	maps['U'] = true;

	int n;
	cin >> n;
	cin.ignore(256, '\n');

	while (n-- > 0)
	{
		string ans = "";
		string s;
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			if (maps.find(s[i]) != maps.end())
			{
				ans += s[i];
			}
		}
		if (ans == "")
		{
			cout << "???" << endl;
		}
		else
		{
			cout << ans << endl;
		}
	}
	return 0;
}
