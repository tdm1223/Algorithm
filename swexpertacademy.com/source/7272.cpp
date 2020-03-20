// 7272. 안경이 없어!
// 2019.07.10
#include<iostream>
#include<string>
#include<map>

using namespace std;

map<char, int> m;
int main()
{
	int test_case;
	int T;
	cin >> T;
	// 알파벳들 맵에 저장
	m['C'] = 1;    m['E'] = 1;    m['F'] = 1;    m['G'] = 1;    m['H'] = 1;    m['I'] = 1;    m['J'] = 1;    m['K'] = 1;
	m['L'] = 1;    m['M'] = 1;    m['N'] = 1;    m['S'] = 1;    m['U'] = 1;    m['V'] = 1;    m['W'] = 1;    m['T'] = 1;
	m['X'] = 1;    m['Y'] = 1;    m['Z'] = 1;
	m['A'] = 2;    m['D'] = 2;    m['O'] = 2;    m['P'] = 2;    m['Q'] = 2;    m['R'] = 2;
	m['B'] = 3;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string ans = "SAME";
		string a, b;
		cin >> a >> b;
		if (a.size() != b.size())
		{
			ans = "DIFF";
		}
		else
		{
			for (int i = 0; i < a.size(); i++)
			{
				if (m[a[i]] != m[b[i]])
				{
					ans = "DIFF";
					break;
				}
			}
		}
		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;
}
