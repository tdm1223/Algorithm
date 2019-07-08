// 4672. 수진이의 팰린드롬
// 2019.07.08
#include<iostream>
#include<string>

using namespace std;

int alpa[26];
int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		string s;
		cin >> s;
		int ans = s.size();
		fill(alpa, alpa + 26, 0);
		for (int i = 0; i < s.size(); i++)
		{
			alpa[s[i] - 'a']++;
		}
		// 같은 문자열이 여러번 있는게 부분문자열의 팰린드롬의 개수의 최대이다.
		// abcabcabc -> aaabbbccc로 바꾸고 각각에 대해 팰린드롬 개수를 센다.
		for (int i = 0; i < 26; i++)
		{
			// 2번 이상 등장한 알파벳에 대해 그걸로 만들 수 있는 팰린드롬의 개수를 더함
			if (alpa[i] > 1)
			{
				int n = alpa[i] - 1;
				ans += (n*(n + 1)) / 2;
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
