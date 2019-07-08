// 4261. 빠른 휴대전화 키패드
// 2019.07.08
#include<iostream>
#include<vector>
#include<string>

using namespace std;

string keypad[10] = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
vector<string> words;
int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		words.clear();
		string s;
		cin >> s;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			string word;
			cin >> word;
			words.push_back(word);
		}
		int ans = 0;
		// 주어진 워드로 만들어 질 수 있는지 확인
		for (int j = 0; j < n; j++)
		{
			string tmp = "";
			string tmp2 = "";
			for (int i = 0; i < s.size(); i++)
			{
				tmp = keypad[s[i] - '0'];
				for (int k = 0; k < tmp.size(); k++)
				{
					if (tmp[k] == '1')
					{
						continue;
					}
					if (tmp[k] == words[j][i])
					{
						tmp2 += words[j][i];
						break;
					}
				}
			}
			if (words[j] == tmp2)
			{
				ans++;
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
