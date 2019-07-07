// 5550. 나는 개구리로소이다
// 2019.07.07
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	string croak = "croak";
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string s;
		cin >> s;
		int pos = 0;
		int ans = 0;
		bool flag = true;
		// 개구리를 찾았는지 찾지 못했는지
		bool find = false;
		//
		bool ansFlag = true;
		string tmp = "";
		while (flag)
		{
			tmp = s;
			find = false;
			for (int i = 0; i < s.size(); i++)
			{
				// 개구리 울음소리 검사. 검사된건 '0'으로 바꿈
				if (s[i] == croak[pos])
				{
					s[i] = '0';
					pos++;
					// 끝까지 도달하면 개구리를 찾음
					if (pos == 5)
					{
						find = true;
						pos = 0;
					}
				}
				// 최종 검사
				if (i == s.size() - 1)
				{
					// 개구리를 찾음
					if (find)
					{
						// 울음소리가 끝나지 않았다면 개구리가 아님
						if (pos != 0)
						{
							ansFlag = false;
							break;
						}
					}
					// 개구리를 찾지 못함
					else
					{
						s = tmp;
						flag = false;
					}
				}
			}
			if (find)
			{
				ans++;
			}
		}

		for (int i = 0; i < s.size(); i++)
		{
			// 울음소리 흔적이 남아있다면 개구리 울음소리가 아님.
			if (s[i] != '0')
			{
				ansFlag = false;
			}
		}

		if (ansFlag)
		{
			cout << "#" << test_case << " " << ans << endl;
		}
		else
		{
			cout << "#" << test_case << " -1" << endl;
		}
	}
	return 0;
}
