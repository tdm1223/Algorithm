// 4406. 모음이 보이지 않는 사람
// 2019.07.01
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string s;
		cin >> s;
		string answer = "";
		for (int i = 0; i < s.size(); i++)
		{
			// 모음 무시
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			{
				continue;
			}
			answer += s[i];
		}
		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;
}
