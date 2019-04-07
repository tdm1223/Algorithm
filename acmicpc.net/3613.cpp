// 3613. Java vs C++
// 2019.04.07
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string ans="";
	int flag = -1;
	// 처음이나 마지막이 _거나 처음이 대문자면 에러
	if (s[s.size() - 1] == '_' || s[0]=='_' || (s[0]>='A' && s[0]<='Z'))
	{
		flag = 0;
	}

	// 문자열 돌면서 체크
	for (int i = 0; i < s.size(); i++)
	{
		// 에러
		if (flag == 0)
		{
			break;
		}
		// 자바인데 _ 있으면 에러
		if (flag == 2 && s[i] == '_')
		{
			flag = 0;
		}
		// c++인데 대문자 있으면 에러
		else if (flag == 1 && (s[i]>='A' && s[i]<='Z'))
		{
			flag = 0;
		}
		// _ 있으면 c++
		else if (s[i] == '_')
		{
			// _ 연속으로 있을땐 에러
			if (i - 1 >= 0 && s[i - 1] == '_')
			{
				flag = 0;
			}
			// 아니면 c++
			else
			{
				flag = 1;
			}
		}
		// 대문자 존재하면 자바
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			flag = 2;
		}
	}

	// 에러 일때
	if (flag == 0)
	{
		cout << "Error!" << endl;
	}
	// c++일때 java로 바꾸기
	else if (flag == 1)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '_')
			{
				ans += s[i+1] - 'a' + 'A';
				i++;
			}
			else
			{
				ans += s[i];
			}
		}
		cout << ans << endl;
	}
	// 자바일때 c++로 바꾸기
	else if (flag == 2)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >='A' && s[i]<='Z')
			{
				ans += '_';
				ans += s[i] - 'A' + 'a';
			}
			else
			{
				ans += s[i];
			}
		}
		cout << ans << endl;
	}
	// 아무것도 아니면 그냥 출력(모두 소문자)
	else
	{
		cout << s << endl;
	}
	return 0;
}
